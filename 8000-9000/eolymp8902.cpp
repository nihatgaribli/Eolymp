#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ++n;
    while(n)
    {
        if(n%2!=0 and n%3!=0 and n%5!=0)
        {
            break;
        }
        else ++n;
    }
    cout << n;
}