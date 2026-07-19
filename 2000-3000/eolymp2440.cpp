#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    set<int, greater<int>> st;
    for(int i = 0; i < 4; i++)
    {
        int t;
        cin >> t;
        for(int j = 0; j < 10; j++)
        {
            int input;
            cin >> input;
            st.insert(input);
        }

        auto it = st.begin();
        advance(it, 2);  
        cout << t <<" " << *it << endl;

        st.clear();
    }
}
