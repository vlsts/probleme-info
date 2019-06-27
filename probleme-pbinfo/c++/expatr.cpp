#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a;
    cin >> a;

    double numarator = 3 * pow(a, 2) + 3 * pow(a, 4);
    double numitor = pow(a, 2) + pow(a, 4) + sqrt(pow(a, 2) + pow(a, 4));
    double p = sqrt(pow(a, 2) + pow(a, 4));
    double operatie = numarator / numitor + p;

    cout << (int) operatie;

    return 0;
}
