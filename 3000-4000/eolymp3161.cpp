#include <iostream>
#include <deque>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, deque<int>> deques;

    for (int i = 0; i < n; ++i) {
        string operation;
        int A, B;
        cin >> operation >> A;

        if (operation == "pushfront") {
            cin >> B;
            deques[A].push_front(B);
        } else if (operation == "pushback") {
            cin >> B;
            deques[A].push_back(B);
        } else if (operation == "popfront") {
            cout << deques[A].front() << endl;
            deques[A].pop_front();
        } else if (operation == "popback") {
            cout << deques[A].back() << endl;
            deques[A].pop_back();
        }
    }

    return 0;
}
