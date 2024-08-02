#include <bits/stdc++.h>

using namespace std;

int onluq(string str, int S)
{
    for (int i = 0; i < str.length(); i++) {
        S += (str[i] * pow(2, str.length() - i - 1));
    }
    return S;
}

int main() {
    int n, S = 0;
    cin >> n;

    string str;

    vector<int> vec;

    while (n) {
        int q = n % 2;
        str.push_back(q);
        n /= 2;
    }

    for (int i = 0; i < str.length(); i++) {
        char firstChar =str[0];
        str += firstChar;
        str.erase(str.begin());
        vec.push_back(onluq(str,0));
    }

    cout << *max_element(vec.begin(),vec.end());
   
    return 0;
}
