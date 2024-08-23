#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> vec1;
    vector<int> vec2;
    vector<int> universe;

    int a, b;

    cin >> a;
    vec1.resize(a);
    for(int i = 0; i < a; i++) {
        cin >> vec1[i];
    }

    cin >> b;
    vec2.resize(b);
    for(int i = 0; i < b; i++) {
        cin >> vec2[i];
    }

    for(int i = 0; i < a; i++) {
        bool found = false;
        for(int j = 0; j < b; j++) {
            if(vec1[i] == vec2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            universe.push_back(vec1[i]);
        }
    }

    cout << universe.size() << endl;

    for(int i = 0; i < universe.size(); i++) {
        cout << universe[i] << " ";
    }

    return 0;
}
