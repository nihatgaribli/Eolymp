#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (  n % m == 0 or m == 1 )
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}