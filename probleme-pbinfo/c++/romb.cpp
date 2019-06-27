#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float d1, d2;

    cin >> d1 >> d2;

    float p = sqrt(pow(d1 / 2, 2) + pow(d2 / 2, 2)) * 4;
    float a = (d1 * d2) / 2;

    cout << p << " " << a;

    return 0;
}
