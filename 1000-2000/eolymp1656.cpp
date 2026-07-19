#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        set<int, greater<int>> vec;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            vec.insert(input);
        }

        for(auto i : vec)
        {
            cout << i << endl;
        }
    }
    else
    {
        set<int> vec1;

        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            vec1.insert(input);
        }

        for(int i : vec1)
        {
            cout << i << endl;
        }
    }
}