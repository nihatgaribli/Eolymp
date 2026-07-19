#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& vec, int i, int j)
{
    int min_idx = i;
    for(int k = i + 1; k < j; k++)
    {
        if(vec[k] < vec[min_idx]) min_idx = k;
    }
    return min_idx;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for(int i = 0, j = n; i < j; i++, j--)
    {
        int min_idx = func(vec, i, j);
        swap(vec[i], vec[min_idx]);

        if(i < j-1)
        {
            min_idx = func(vec, i + 1, j);
            swap(vec[j-1], vec[min_idx]);
        }
    }

    for(int i : vec)
    {
        cout << i << " ";
    }
}
