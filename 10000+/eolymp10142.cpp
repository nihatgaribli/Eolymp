#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    deque<int> unique1(n);
    deque<int> unique2(n);

    for(int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        unique1.push_back(n);
    }

    for(int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        unique2.push_back(n);
    }

    while(unique1.size())
        {
            if(unique1.front() == unique2.front())
            {
                unique1.pop_front();
                unique2.pop_front();
            }
            else
            {

                unique1.push_back(unique1.front());
                unique1.pop_front();
                count++ ;
            }
        }

    cout << count + n;
}