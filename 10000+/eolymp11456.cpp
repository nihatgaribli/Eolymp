#include<bits/stdc++.h>
using namespace std;

int main()
{
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

    for(int i = 0; i < n; i++)
    {
        int max = vec[i];
        for(int j = i+1 ; j < n; j++)
        {
            if(vec[j] > max) 
            {
                max = vec[j];
                break;
            }
        }

        if(max > vec[i])
        {
            vec[i] = max;
        }
        else
        {
            vec[i] = -1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << vec[i] <<" ";
    }
}