#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);

    vector<char> vec;

    for(int i = 0; i < str.length(); i++)
    {
        vec.push_back(str[i]);

        // Sonuncu iki elementi yoxlayırıq
        if(vec.size() > 1 && vec[vec.size() - 2] == '(' && vec[vec.size() - 1] == ')')
        {
            vec.pop_back(); // ')' silinir
            vec.pop_back(); // '(' silinir
        }
    }

    cout << vec.size();
}
