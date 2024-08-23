#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n,m, Min;
    cin >> n;

    vector <int> vec;

    for(int i = 0; i < n; i++)
    {
        cin >> m;
        if(m != 0) vec.push_back(m);

        else
        {
            vec.pop_back();
            Min = *max(vec.begin(), vec.end()) ;
            cout << Min << endl;
        }
    }
}
