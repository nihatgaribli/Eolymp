#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;

    string str;
    while(cin >> str)
    {
        if(str == "push")
        {
            int n;
            cin >> n;
            vec.push_back(n);
        }

        else if(str == "top" and !vec.empty())
        {
            cout << vec.back()<<endl;
        }

        else if(str == "pop" and !vec.empty())
        {
            vec.pop_back();
        }
    }

}