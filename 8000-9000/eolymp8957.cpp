#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 0;
    cin >> n;
    vector < int> vec(n);
    vector <int> vec1;
    for (int i = 0; i < n ;  i++)
    {
        cin >> vec[i];
        
        if(vec[i]%2 == 0)
        {
            vec1.push_back(vec[i]);
            l++;
        }
    }
    if(l == 0)
    cout<<"NO";
    else
    {
        cout << l<<"\n";
        for(int i = l-1 ; i >= 0; i--)
        cout<<vec1[i]<<" ";
    }
return 0;
}