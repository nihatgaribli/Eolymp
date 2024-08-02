#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if( n == 1) cout << 8;
    else cout << 9 * pow(8,n-1);
}

// 1 2 3 4 5 7 8 9 
// 10 11 12 13 14 15 17 18 19   9
// 20 21 22 23 24 25 27 28 29   9   72
// 100 - 199  - 72
// 200 - 299  - 72   576