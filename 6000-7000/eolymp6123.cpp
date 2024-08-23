#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;

    while(true)
    {
        string str;
        cin >> str;

        if(str == "push")
        {
            int m;
            cin >> m;
            vec.push_back(m);
            cout << "ok" << endl;
        }

        else if(str == "pop")
        {
            if(!vec.empty())
            {
                cout << vec.back() << endl;
                vec.pop_back();
            }
            else
            {
                cout << "error" << endl;
            }
        }

        else if(str == "back")
        {
            if(!vec.empty())
            {
                cout << vec.back() << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }

        else if(str == "size")
        {
            cout << vec.size() << endl;
        }

        else if(str == "clear")
        {
            vec.clear();
            cout << "ok" << endl;
        }

        else if(str == "exit")
        {
            cout << "bye";
            return 0;
        }
    }
}