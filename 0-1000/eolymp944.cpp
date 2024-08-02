#include <bits/stdc++.h>
using namespace std;

float sahe(float a1, float b1, float c1, float a2, float b2, float c2, float a3, float b3, float c3)
{
    float t1 = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2) + pow(c2 - c1, 2));
    float t2 = sqrt(pow(a3 - a1, 2) + pow(b3 - b1, 2) + pow(c3 - c1, 2));
    float t3 = sqrt(pow(a2 - a3, 2) + pow(b2 - b3, 2) + pow(c2 - c3, 2));
    float p = (t1 + t2 + t3) / 2;
    float S = sqrt(p * (p - t1) * (p - t2) * (p - t3));
    return S;
}

int main()
{
    float x1, y1, z1;
    cin >> x1 >> y1 >> z1;
    float x2, y2, z2;
    cin >> x2 >> y2 >> z2;
    float x3, y3, z3;
    cin >> x3 >> y3 >> z3;
    float x4, y4, z4;
    cin >> x4 >> y4 >> z4;

    float S1 = sahe(x1, y1, z1, x2, y2, z2, x3, y3, z3);
    float S2 = sahe(x4, y4, z4, x2, y2, z2, x3, y3, z3);
    float S3 = sahe(x1, y1, z1, x4, y4, z4, x3, y3, z3);
    float S4 = sahe(x1, y1, z1, x2, y2, z2, x4, y4, z4);
    cout << setprecision(1) << fixed << S1 + S2 + S3 + S4;
}