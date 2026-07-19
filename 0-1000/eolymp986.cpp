#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n;
    
    vector<int> vec(n);

    for(int i = 0; i < n; i++)
        cin >> vec[i] ;

    sort(vec.begin(), vec.end());

    int Max = 0;
    for(int i = 0 ; i < n;i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(vec[j] - vec[i] > 1)
                break;
            else 
                count++;
        }
        Max = max(Max, count);
    }
    cout << Max;
}