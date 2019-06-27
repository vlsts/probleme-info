#include <iostream>

using namespace std;

int main() {
    int a, b, c,
    plusA, plusB, plusC;

    cin >> a >> b >> c;

    plusA = b * c + a;
    plusB = a * c + b;
    plusC = a * b + c;

    cout << max(max(plusA, plusB), plusC);

    return 0;
}
