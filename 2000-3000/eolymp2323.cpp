#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    string str1 = str;

    sort(str.begin(), str.end()); 
    sort(str1.begin(), str1.end(), greater<char>());

    long long max_num = stoll(str);
    long long min_num = stoll(str1);

    long long S = max_num + min_num;

    cout << S << endl;

    return 0;
}
