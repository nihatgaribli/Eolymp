#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindrom(const string& str)
{
    int n = str.length();
    for(int i = 0; i < n / 2; i++)
    {
        if(str[i] != str[n - i - 1])
            return false;
    }
    return true;
}

string ters(const string& str) {
    string Ters = str;
    reverse(Ters.begin(), Ters.end());
    return Ters;
}

int main()
{
    int k = 0;
    string str;
    getline(cin, str);

    while(true)
    {
        if(palindrom(str)) {
            cout << k << endl;
            return 0;
        }
        else {
            long long sum = stoll(str) + stoll(ters(str));
            str = to_string(sum);
        }
        k++;
    }
}