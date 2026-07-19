#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int &i:vec) cin >> i;
    for(int x:vec)
    {
        int r = upper_bound(vec.begin(), vec.end(), 2*x) - vec.begin()-1;
        int l = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
        cout << l-r+1 <<" ";
    }
}
