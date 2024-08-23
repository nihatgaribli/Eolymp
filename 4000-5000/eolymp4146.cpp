#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    unordered_set<int>tree;

    string str;
    int n;

    while(cin >> str >> n)
    {
        if(str == "insert")
        {
            tree.insert(n);
        }

        else if(str == "exists")
        {
            if(tree.find(n) != tree.end())
            {
                cout <<"true"<<endl;
            }
            else 
            {
                cout <<"false"<<endl;
            }
        }
        else if(str == "delete")
        {
            tree.erase(n);
        }
    }
}
