#include<iostream>
using namespace std;


int ters(int m)
{
    int n = m;
    int t = 0;
    while(n)
    {
        int a = n%10;
        t *= 10;
        t += a;
        n /= 10;
    }
    return t;
}

bool sade(int m)
{
    int n = m;

}

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = n; i<=m;i+=2)
    {
        
    }
}