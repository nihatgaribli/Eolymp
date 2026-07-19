#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int main() {
    long long n;
    cin >> n;

    set<long long> representable;

    for (long long a = 2; a * a <= n; a++) {
        long long power = a * a;
        while (power <= n) {
            representable.insert(power);
            if (power > n / a) break; // Overflows should be prevented
            power *= a;
        }
    }

    long long result = n - representable.size();
    cout << result << endl;

    return 0;
}
