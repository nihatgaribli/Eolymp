#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n+1);

    
    for(int i = 1; i <= n; i++){
        cin >> dp[i];
    }

    int k;
    cin >> k;

    for (int i = 1; i <= n; i++){
        // dp[i] = i  cemi ucun yollarin sayi
        for (int j = 1; j <= k; j++){
            // (i-j) + j
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i-j]) % mod;
            }
        }
    }

    cout << dp[n] << endl;
}