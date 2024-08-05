#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> test;

    while(true)
    {
        string str;
        cin >> str;

        if( str == "push_front")
        {
            int x;
            cin >> x;
            test.push_front(x);
            cout << "ok" <<"\n";
        }

        else if( str == "push_back")
        {
            int x;
            cin >> x;
            test.push_back(x);
            cout << "ok" <<"\n";
        }

        else if( str == "pop_back")
        {
            cout << test.back() <<"\n";
            test.pop_back();
        }

        else if( str == "pop_front")
        {
            cout << test.front() <<"\n";
            test.pop_front();
        }

        else if (str == "front")
        {
            cout << test.front() <<"\n";
        }

        else if (str == "back")
        {
            cout << test.back() <<"\n";
        }

        else if( str == "clear")
        {
            test.clear();
            cout << "ok" <<"\n";
        }

        else if( str == "size")
        {
            cout << test.size() <<"\n";
        }

        else 
        {
            cout << "bye";
            return 0;
        }
    }
}