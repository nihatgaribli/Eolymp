#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{
    deque<int> a, v;
    int tests;

    cin >> tests;
    
    for (int i = 1; i <= tests; i++) {

        int n;
        cin >> n;

        a.clear();
        v.clear();

        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            a.push_back(val);
        }

        sort(a.begin(), a.end());

        v.push_back(a.back());
        v.push_front(a.front());

        int s = abs(v.back() - v.front());

        a.pop_back();
        a.pop_front();

        while (!a.empty()) {
            int mx[4];

            mx[0] = abs(v.front() - a.front());
            mx[1] = abs(v.back() - a.front());
            mx[2] = abs(v.front() - a.back());
            mx[3] = abs(v.back() - a.back());

            int rmax = *max_element(mx, mx + 4);

            if (rmax == mx[0]) {
                v.push_front(a.front());
                a.pop_front();
            } else if (rmax == mx[1]) {
                v.push_back(a.front());
                a.pop_front();
            } else if (rmax == mx[2]) {
                v.push_front(a.back());
                a.pop_back();
            } else {
                v.push_back(a.back());
                a.pop_back();
            }
            s += rmax;
        }

        cout << "Case" << i << ": " << s << endl;
    }
    
    return 0;
}
