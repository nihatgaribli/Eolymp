#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k,w;
    cin >> k >> w;
    int a1,b1,a2,b2,a3,b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if ((a1 <= w and b1 >= k) or 
        (a2 <= w and b2 >= k) or
        (a3 <= w and b3 >= k) or

        (a1+a2 <= w and b1+b2 >= k) or
        (a3+a2 <= w and b3+b2 >= k) or
        (a1+a3 <= w and b1+b3 >= k) or
        
        (a1+a2+a3 <= w and b1+b2+b3 >= k))
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
}


// 1 çadır: 
    // 1) a1 -> b1  2) a2 -> b2   3) a3 -> b3

// 2 çadır: 
    // 1) a1+a2 -> b1+b2  2) a2+a3 -> b2+b3   3) a1+a3 -> b1+b3

// 3 çadır: 
    //  a1+a2+a3 -> b1+b2+b3  