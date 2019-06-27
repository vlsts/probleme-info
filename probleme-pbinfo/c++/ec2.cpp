#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;
    double delta = (b * b) - (4 * a * c);

    if (delta < 0) cout << "Nu are solutii reale";
    else if (delta == 0) {
        double S = (-1 * b) / (2 * a);
        cout << "Radacina dubla " << fixed << setprecision(2) << S;
    }
    else {
        double S1 = ((-1 * b) + sqrt(delta)) / (2 * a);
        double S2 = ((-1 * b) - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2) << S1 << " " << S2;
    }

    return 0;
}