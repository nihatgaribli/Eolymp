#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    int Max = a;
    if(b > Max)Max = b;
    return Max;

}
int main()
{
    int n;
    cin >> n;
     int a = n / 100;
     int b = n / 10 % 10;
     int c = n % 10;
    int AB = a*10+b;
    int AC = a*10+c;
    int BC = b*10+c;
    cout<<max(AB,max(BC,AC));
    return 0;
}