#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, t;
    cin >> n >> t;
    deque<int> a(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    int left = 0, right = 0;
    int current_sum = 0;
    int max_books = 0;

    while (right < n) 
    {
        current_sum += a[right];
        while (current_sum > t) 
        {
            current_sum -= a[left];
            left++;
        }
        max_books = max(max_books, right - left + 1);
        right++;
    }

    cout << max_books;

    return 0;
}