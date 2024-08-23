#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n;
    cin >> n;

    set<string>mySet;

    for(int i = 0; i < n; i++)
    {
        string ch;
        cin >> ch;
        mySet.insert(ch);
    }

    for(string i : mySet)
    {
        cout << i << endl;
    }
}
