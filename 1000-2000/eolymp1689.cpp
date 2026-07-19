#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        cin >> input;
        st.insert(input);
    }

    int count = 0;
    if(st.size() != 4)
        count = 4 - st.size();

    for(int i : st)
    {
        if(i != 0 or !(i >= 6 and i<=14))
        {
            count++;
        } 
    }

    cout << count;
}