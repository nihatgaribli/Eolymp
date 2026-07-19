#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while (cin >> n && n > 0) {
        deque<int> cards;
        vector<int> discarded;

        for (int i = 1; i <= n; ++i) {
            cards.push_back(i);
        }

        while (cards.size() > 1) {
            discarded.push_back(cards.front());
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < discarded.size(); ++i) {
            cout << discarded[i];
            if (i < discarded.size() - 1) {
                cout << ", ";
            }
        }
        cout << "\nRemaining card: " << cards.front() << "\n";
    }

    return 0;
}
