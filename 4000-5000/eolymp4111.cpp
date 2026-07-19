#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    string str1, str2;

    for(int i = 0; i < n; i++)
    {
        cin >> str1 >> str2;

        transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if(str1 == str2)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;

            str1.clear();
            str2.clear();
    }
}
