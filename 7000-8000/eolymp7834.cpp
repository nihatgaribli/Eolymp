#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    int n; cin >> n;
    int array[n]; 

    for (int i = 0; i < n; ++i) 
    {
        cin >> array[i];
    }
    sort(array, array + n, greater<int>());
    cout << array[0] + array[1];
    return 0;
}