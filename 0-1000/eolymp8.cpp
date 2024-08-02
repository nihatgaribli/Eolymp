#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, S = 7, h=1;
    cin >> n;
    
    if(n==1) {
        cout << 4;
        return 0;
    }

    if(n == 2) cout << 7;
    else while(n)
    {
        S += 3; n -= 1;
        if( n == 2) break;
        for(int i = 0; i < h; i++)
        {
            S += 2; n -= 1;
            if( n == 2){cout << S;return 0;}
        }
        S += 3; n -= 1;
        for(int i = 0; i < h; i++)
        {
            S += 2; n -= 1;
            if( n == 2){cout << S;return 0;}
        }
        h += 1;
    }
}