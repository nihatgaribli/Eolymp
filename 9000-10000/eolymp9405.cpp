#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int mavi = a+b-n;
    int qirmizi = b - mavi;
    int sari = a - mavi;
    cout << mavi << " " << qirmizi << " " << sari;
    return 0;
}