#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int z, l, a;

    cin >> z >> l >> a;

    bool bisect = ( a % 4 == 0 && a % 100 != 0 ) || a % 400 == 0;
    bool luna30 = l == 4 || l == 6 || l == 9 || l == 11;

    if ((z < 1 || z > 31) || (l < 1 || l > 12)) cout << "NU";
    else {
        if (luna30 && z == 31) cout << "NU";
        else if (l == 2) {
            if (z == 30 || z == 31) cout << "NU";
            else if (!bisect && z == 29) cout << "NU";
            else cout << "DA";
        }
        else cout << "DA";
    }
    return 0;
}