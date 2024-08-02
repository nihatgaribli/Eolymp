#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=0) cout<<x*(x*x+2*x+4)-6;
    else cout<<x*(x*x-7);
    return 0;
}