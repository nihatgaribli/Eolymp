#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if( n % 2 == 0)
    {
        for( int i = 0; i < n-1; i += 2)
        {
            c = a[i];
            a[i] = a[i+1];
            a[i+1] = c;
        }
    }
    else
    {
        for( int i = 0; i < n-2; i += 2)
        {
            c = a[i];
            a[i] = a[i+1];
            a[i+1] = c;
        }
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}