#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> vec(n);
    for(int &i : vec) cin >> i;
    set<int> st;
    int count = 0, l = 0;
    for(int r = 0; r < n; r++)
    {
        while(l <= r and st.find(vec[r]) != st.end())
        {
            st.erase(vec[l]);
            l++;
        }
        st.insert(vec[r]);
        count = max(count , r-l+1);
    }
    cout << count; 
}