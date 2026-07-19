#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i];

    for(int i = 0; i < k; i++)
    {
        vec.push_back(vec[vec.size()-1] + vec[vec.size()-n]);
    }

    for(int i = k; i < vec.size(); i++)
        cout << vec[i] << " ";
}