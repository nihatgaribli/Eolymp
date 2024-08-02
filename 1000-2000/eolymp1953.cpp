#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n;
    vector<int>vec;
    
    for (int i=0;i<n;i++)
    {
        cin >> t;
        vec.push_back(t);
    }
    vector<int>vec1 = vec;
    sort(vec.begin(),vec.end());
    for (int i=n-1;i>=0;i--)
    {
        for(int j =0; j <n;j++)
        {
            if(vec[i] == vec1[j])
            {cout << j+1<<" ";
            vec1[j] = 10000;
            break;}
        }
    }
    return 0;
}