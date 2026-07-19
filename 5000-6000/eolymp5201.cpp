#include <bits/stdc++.h>
using namespace std;

int mod = 1743;

int func(int n)
{
    int P = (132*n*n*n)%mod + (77*n*n)%mod + (1345*n)%mod + 1577;
    return P%mod;
}

int main()
{
    int n,k;
    cin >> n >> k;

    set<int> vec;

    for(int i = 1; i <= n; i++)
    {
        vec.insert(func(i));
    }

    auto it = vec.begin();
    advance(it,1);
    cout << *it;
}