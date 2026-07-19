#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n;
    cin >> n;
    unordered_set<string> mySet;

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        for(int j = 0; j < k; j++)
        {
            string str;
            cin >> str;
            mySet.insert(str);
        }
        cout << mySet.size() << endl;
        mySet.clear();
    }
}
