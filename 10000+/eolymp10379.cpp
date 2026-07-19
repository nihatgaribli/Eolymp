#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> freq;            // Elementlərin tezliyini izləyən xəritə (map)
    vector<stack<int>> st;         // Tezlik səviyyələrini izləyən stack vektorları

    string str;
    int n;

    while (cin >> str)
    {
        if (str == "push")
        {
            cin >> n;
            int f = freq[n];       // Elementin cari tezliyini alırıq
            freq[n] = f + 1;       // Tezliyi artırırıq

            if (f == st.size())    // Yeni tezlik səviyyəsi üçün stack əlavə olunur
                st.push_back(stack<int>());

            st[f].push(n);         // Elementi müvafiq tezlik səviyyəsindəki stack-ə əlavə edirik
        }
        else if (str == "pop")
        {
            int x = st.back().top();   // Ən yüksək tezlik səviyyəsindən elementi götürürük
            st.back().pop();           // Elementi həmin stack-dən çıxarırıq

            if (st.back().empty())     // Əgər stack boşdursa, onu çıxardırıq
                st.pop_back();

            freq[x]--;                 // Elementin tezliyini azaldırıq

            cout << x << endl;         // Elementi çap edirik
        }
    }

    return 0;
}
