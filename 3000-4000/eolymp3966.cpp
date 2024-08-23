#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> mySet;
    vector<int> vec;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        mySet.insert(m);
    }

    int k;
    cin >> k;

    vec.resize(k);
    for(int i = 0; i < k; i++)
    {
        cin >> vec[i];
    }

    for(int j : vec)
    {
        if(mySet.find(j) != mySet.end()) 
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
