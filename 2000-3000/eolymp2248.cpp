#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque<int> d;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (!d.empty() && d.front() == i - k) {
            d.pop_front();
        }

        while (!d.empty() && a[d.back()] >= a[i]) {
            d.pop_back();
        }

        d.push_back(i);

        if (i >= k - 1) {
            result.push_back(a[d.front()]);
        }
    }

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
