#include <bits/stdc++.h>
using namespace std;

int m[110];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int maj = 0, cnt = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            maj = m[i];
            cnt++;
        }
        else if (m[i] == maj)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] == maj)
        {
            cnt++;
        }
    }

    if (2 * cnt > n)
    {
        cout << maj;
    }
    else
    {
        cout << "-1";
    }
}