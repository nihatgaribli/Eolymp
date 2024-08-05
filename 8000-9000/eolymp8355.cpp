#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> shelf;
    vector<int> operation();

    int n, x;
    cin >> n;
    for(int i = 0; i  < n; i++)
    {
        int input;
        cin >> input;

        if( input == 1 )
        {
            cin >> x;
            shelf.push_front(x);
        }

        else if( input == 2 ) 
        {
            cin >> x;
            shelf.push_back(x);
        }

        else if ( input == 3 )
        {
            cout << shelf.front() <<"\n";
            shelf.pop_front();
        }   
        else 
        {
            cout << shelf.back() <<"\n";
            shelf.pop_back();
        }
    }
}