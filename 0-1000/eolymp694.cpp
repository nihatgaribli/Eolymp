#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;

    deque<int> value, mn;
    long long Res = 0;

    for (int i = 1; i <= n; ++i)
    {
        x = ((1LL * a * x * x + 1LL * b * x + c) / 100) % 1000000LL;

        if (x % 5 < 2)
        {
            if (!value.empty())
            {
                if (value.front() == mn.front())
                {
                    mn.pop_front();
                }
                value.pop_front();
            }
        }
        else
        {
            value.push_back(x);
            while (!mn.empty() && (x < mn.back()))
            {
                mn.pop_back();
            }
            mn.push_back(x);
        }

        if (!mn.empty())
        {
            Res += mn.front();
        }
    }

    cout << Res << endl;
    return 0;
}
