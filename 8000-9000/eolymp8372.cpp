#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if ( a+b > c or a+c > b or b+c>a)
    cout <<"YES";
    else cout << "NO";
    return 0;
}