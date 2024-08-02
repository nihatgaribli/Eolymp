#include <bits/stdc++.h>
using namespace std;
int main() { int n; 
set<int>set1; 
cin>>n;

for(int i=0; i<n;i++)
{ 
    int m; 
    cin>>m; 
    set1.insert(m); 
}
cout<<set1.size();
}