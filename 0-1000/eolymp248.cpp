#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int S =1,t=2;
    for(int i = 1; i <= n; i++)
    {
        S += t;
        t+=2;
    }
    cout << S;
}