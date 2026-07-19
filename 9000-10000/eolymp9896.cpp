#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n;
    double Sum = 0;
    cin >> n;

    set<double> mySet;

    for(int i = 0; i < n; i++)
    {
        double k;
        cin >> k;
        mySet.insert(k);
    }

    for(double i : mySet)
    {
        Sum += i;
    }

    double result = Sum/mySet.size();

    cout << fixed << setprecision(4) << result ;
}
