#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> vec;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) 
    {
        int t;
        cin >> t;
        vec.push_back(t);
    }

    int max = *max_element(vec.begin(), vec.end());

    int cem = 0;
    for (int t : vec)
    {
        if (t != max) 
        {
            cem += t;
        }
    }
    cout << cem << endl;
    return 0;
}
