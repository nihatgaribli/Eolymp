#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int a, b , c;
    ++n;
    for(int i = n; i < m; i++)
    {
        a = i/100;
        b = i/10%10;
        c = i%10;
        if( i == pow(a,3) + pow(b,3) + pow(c,3)) cout << i << " ";
    }
    return 0;
}