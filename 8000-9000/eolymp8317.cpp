#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    string str1 = str;

    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end(), greater<char>());

    long long S1 = stoll(str);
    long long S2 = stoll(str1);
    long long S = pow(S2-S1,2);

    cout << S;
}