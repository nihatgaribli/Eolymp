#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, S = 0, t;
    cin >> n;
    for(int i = 1; i < 100000000; i++)
    {
        S += i;
        if( S % n == 0) {t = i ;break;}
    }
    cout << t;
}