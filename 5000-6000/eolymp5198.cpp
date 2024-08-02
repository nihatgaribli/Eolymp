#include <bits/stdc++.h>
using namespace std; 
long long n, 
ans = 1; 
long long func(long long x, long long y, long long z)
{

if (y == 0)
    return 1 % z;

if (y % 2 == 1)
    return (func(x, y - 1, z) * x) % z;
else
    return (func((x * x) %z, y / 2 , z)) %z;
} int main()
{
long long n, m, k;
cin>>n>>m>>k;
cout<<func(n, m, k);
}