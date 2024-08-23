#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vec;

    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        if(m == 1)
        {
            int k;
            cin >> k;
            vec.push_back(k);
        }

        else if (m == 2)
        {
            cout << vec.back()<<endl;
            vec.pop_back();
        }
    }
}