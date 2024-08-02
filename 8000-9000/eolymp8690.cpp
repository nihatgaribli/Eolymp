#include <iostream>
using namespace std;

long long calculateFunction(int x, int y, int z) {
    return x * y * z + x + y * y + z * z * z;
}

int main() 
{
    int x, y, z;
    cin >> x >> y >> z;

    long long result = calculateFunction(x, y, z);
    cout << result <<endl;
    return 0;
}