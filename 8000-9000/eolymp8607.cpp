#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,S=0;
    cin >> n;
    while(n)
    {
        int k = n%10;
        S += k*k;
        n /= 10;
    }
    cout<<S;
}