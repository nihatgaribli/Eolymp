#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> dishes; // Dishes to be processed
    vector<int> D;      // Washable dishes
    vector<int> C;      // Drying dishes

    for(int i = n; i >= 1; i--)
    {
        dishes.push_back(i);
    }

    int m, k;
    while(!dishes.empty() || !D.empty())
    {
        cin >> m >> k;
        if(m == 1 && !dishes.empty())
        {
            for(int i = 0; i < k && !dishes.empty(); i++)
            {
                D.push_back(dishes.back());
                dishes.pop_back();
            }
        }
        else if(m == 2 && !D.empty())
        {
            for(int i = 0; i < k && !D.empty(); i++)
            {
                C.push_back(D.back());
                D.pop_back();
            }
        }
    }

    for(int i = C.size()-1; i >= 0; i--)
    {
        cout << C[i] << endl;
    }

    return 0;
}
