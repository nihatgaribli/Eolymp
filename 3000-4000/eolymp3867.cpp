#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int min = a;
    if(b < min) min = b;
    if (c < min) min = c;
    cout << min;
    return 0;
    
}