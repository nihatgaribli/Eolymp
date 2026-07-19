#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    string str1 = str;
    sort(str.begin(), str.end(), greater<char>());
    sort(str1.begin(), str1.end());

    if(str1[0] == '0')
    {
        int k;
        for(int i = 0; i < str1.length(); i++)
        {
            if(str1[i] != '0')
            {
                k = i;
                break;
            }
        }
        swap(str1[k], str1[0]);
    }
    long long S1 = stoll(str1);
    long long S2 = stoll(str);
    long long S = S1 + S2;
    
    cout << S;
}
