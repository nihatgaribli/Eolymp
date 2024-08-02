#include <bits/stdc++.h>
using namespace std;

int max(int a[], int n)
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }
    int Max = max(a,n);
    for ( int i = 0; i < n; i++)
    {
        if(a[i] == Max) a[i] =0;
    }
    Max = max(a,n);
    cout << Max;
    return 0;
}