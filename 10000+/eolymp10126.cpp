#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<long long> mySet;

    int a, b;
    cin >> a >> b;

    for(int i = 0; i < a; i++) {
        long long m;
        cin >> m;
        mySet.insert(m);
    }

    int count = 0;

    for(long long i : mySet) {
        if (mySet.find(i + b) != mySet.end()) {
            count++;
        }
    }

    cout << count;
}