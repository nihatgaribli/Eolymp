#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++)
    {
        int k, input;
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> input;
            st.insert(input); 
        }

        long long S = 0;
        for(int j : st)
        {
            S += j;
        }

        int med = S/st.size();
        S = 0;

        for(int j : st)
        {
            S += abs(j-med);
        }
        st.clear();

        cout << S << endl;        
    }
}