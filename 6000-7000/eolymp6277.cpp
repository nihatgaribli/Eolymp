#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int i =0;
    cin >> n;
    while(n>=1.2)
    {
        n -= 1.2;
        i ++;
        n += 0.2;
    }
    cout << i;
}