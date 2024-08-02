#include <bits/stdc++.h>
using namespace std;
 int main ()
{ 
    long long n; 
    cin >> n; 
    n=n+1; 
    while(round(sqrt(n))!=sqrt(n))
    { 
        n++;
    } 
    cout<<n; 
    return 0;
} 