#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
            a[i][j] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n / 2 + 1; j < n; j++)
            a[i][j] = 3;
    }
    for (int i = 0; i < n; i++)
        a[i][n / 2 + 1] = 4;
    for (int i = 0; i < n; i++)
    {
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j];
        }
        cout << endl;
    }
}