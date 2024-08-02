#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, S1 = 1, S2 = 1;
    cin >> n >> k;
    for( int i = n-k+1; i <= n ; i++) 
    S1 *= i;
    for(int i = 2; i <= k ; i++)
    S2 *= i;
    cout << S1/S2;
}