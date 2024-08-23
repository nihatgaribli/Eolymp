#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int i, maxVal = 0, n;
vector<int> d(16), c(16);

void recurs(int k, int s) {
    int f = 0, q, j;
    for (j = 1; j <= n; ++j) {
        if (d[j] >= k) {
            q = (d[j] - k + 1) * c[j];
            int temp = d[j];
            d[j] = 0;
            recurs(k + 1, s + q);
            d[j] = temp;
            f = 1;
        }
    }
    if (f == 0) {
        if (maxVal < s) maxVal = s;
    }
}

int main() {
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> d[i] >> c[i];
    }
    recurs(1, 0);
    cout << maxVal << endl;
    return 0;
}
