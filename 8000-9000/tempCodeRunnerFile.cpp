#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    unordered_set<int> mySet;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        int len = mySet.size();
        mySet.insert(k);
        if (len == mySet.size())
        {
            cout << "No " << len << endl;
        }
        else
        {
            cout << "Yes " << mySet.size() << endl;
        }
    }
}
