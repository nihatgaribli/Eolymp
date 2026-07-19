#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t = 1;
    while(cin >> n)
    {
        if (n == 0)
            return 0;
        else
        {
            vector<string> str(n), str1(n); 
            for(int i = 0; i < n; i++)
                cin >> str[i];

            str1 = str; 
            sort(str1.begin(),str1.end());
            int S = 0;

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(str[i] == str1[j])
                        S += abs(i - j);
                }
            }

            cout << "Site " << t << ": " << S << endl;
            t++;
        }
    }
}
