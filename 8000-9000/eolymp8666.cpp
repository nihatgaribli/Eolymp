#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<char> vec;
    string str;

    int n, len;
    cin >> n;

    for(int k = 0; k < n; k++)
    {
        cin >> len >> str;


    for(int i = 0; i < len; i++)
    {
        vec.push_back(str[i]);

        // Sonuncu iki elementi yoxlayırıq
        if(vec.size() > 1 && vec[vec.size() - 2] == '>' && vec[vec.size() - 1] == '<')
        {
            vec.pop_back(); // ')' silinir
            vec.pop_back(); // '(' silinir
        }
    }

    if(vec.size() == 0) cout << "legal" << endl;
    else cout << "illegal" << endl;

    str.clear();
    vec.clear();
    }
}
