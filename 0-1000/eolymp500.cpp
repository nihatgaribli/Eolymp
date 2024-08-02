#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        int t,l,h;
        cin >> t >> l >> h;
        int S = 2*(t*h + l*h);
        if( S % 16 != 0)
        a[i] = S/16+1;
        else a[i] = S/16;
    }
    for( int i = 0; i < n; i++)
    cout << a[i] << endl;
}
