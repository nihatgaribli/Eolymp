#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int say1 = 0 ; int say2 = 0 ; 
    if(str[0] == ')')
    cout<<"NO";
    else
    {   
        for ( int i = 0 ; i < str.length(); i++)
        {
            if(str[i] == '(')
            say1++;
            else say2++;
        }
        if( say1 == say2)
        cout << "YES";
        else cout << "NO";
    }
}