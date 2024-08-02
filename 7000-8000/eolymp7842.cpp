#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,S=0;
    cin >> n;
    int a[n];
    for( int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i =0; i<n;i += 2)
    cout <<a[i]<<" ";
}