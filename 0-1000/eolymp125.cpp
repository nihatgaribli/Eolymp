#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, h2, m1, m2, s1, s2;
    int h , m , s;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    if(s1 > s2)
    {
        s = s2+60-s1;
        m2--;

    }
    else 
    {
        s = s2 - s1;
    }
    if(m1>m2)
    {
        m = m2+60-m1;
        h2--;
    }
    else
    {
        m = m2 - m1;
    }
    h = h2 - h1;
    cout << h << " " << m <<" " << s;
}