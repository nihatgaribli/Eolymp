#include <bits/stdc++.h>
using namespace std;

int Count(vector<int>& arr) 
{
    vector<int> vec;
    for (int i = 0; i < arr.size(); ++i) 
    {
        bool t = false;
        for (int j = 0; j < vec.size(); ++j) 
        {
            if (arr[i] == vec[j]) 
            {
                t = true;
                break;
            }
        }
        if (!t) 
        {
            vec.push_back(arr[i]);
        }
    }
    return vec.size();
}

int main() 
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    int count = Count(arr);
    cout << count;
    return 0;
}