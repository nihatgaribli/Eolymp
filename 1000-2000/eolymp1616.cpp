#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool t=true;
    for(int i = 2; i < sqrt(n)+1; i++)
    {
        if(n%i==0)t =false;
    }
    if(t==true)cout<<"YES";
    else cout<<"NO";
    return 0;
}