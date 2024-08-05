#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,s, max = 0 ;
    cin >> n >> m;
    queue<int> q;

    int i;
    for(s = i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
        s += val;

        while(s > m)
        {
            s -= q.front();
            q.pop();
        }
        
        if(s > max) max = s;
    }
    cout << max;
}