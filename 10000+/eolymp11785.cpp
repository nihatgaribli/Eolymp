#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
int fi[N], di[N];

int mod_pow(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2) res = 1LL * res * base % mod;
        base = 1LL * base * base % mod;
        exp /= 2;
    }
    return res;
}

void preprocess(int n) {
    for (int i = 1; i <= n; i++) {
        fi[i] = i;
        di[i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        if (fi[i] == i) {
            for (int j = i; j <= n; j += i) {
                if (fi[j] == j) fi[j] = i;
                int cnt = 0, x = j;
                while (x % i == 0) {
                    cnt++;
                    x /= i;
                }
                di[j] *= (cnt + 1);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    preprocess(n);

    int S = 0;
    for (int i = 2; i <= n; i++) {
        S = (S + mod_pow(di[i], fi[i], m)) % m;
    }

    cout << S;
}
