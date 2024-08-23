#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    stack<int> st;
    stack<int> minStack;

    for (int i = 0; i < n; i++) {
        cin >> m;

        if (m == 1) {
            int t;
            cin >> t;
            st.push(t);

            if (minStack.empty() || t <= minStack.top()) {
                minStack.push(t);
            }
        }

        if (m == 2) {
            if (!st.empty()) {
                if (st.top() == minStack.top()) {
                    minStack.pop();
                }
                st.pop();
            } 
        }

        if (m == 3) {
            if (!minStack.empty()) {
                cout << minStack.top() << endl;
            } 
        }
    }
}
