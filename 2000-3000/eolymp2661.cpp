#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int a,b;

    set<int> set;

    cin >> a;
    for(int  i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        set.insert(k);
    }

    cin >> b;
    for(int  i = 0; i < b; i++)
    {
        int k;
        cin >> k;
        set.insert(k);
    }

    for(int i : set)
    {
        cout << i <<" ";
    }
}
