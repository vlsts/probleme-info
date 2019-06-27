#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int z, l, a,
        zf, lf, af;

    cin >> z >> l >> a;

    bool bisect = ( a % 4 == 0 && a % 100 != 0 ) || a % 400 == 0;
    bool luna30 = l == 4 || l == 6 || l == 9 || l == 11;
    bool luna31 = l == 1 || l == 3 || l == 5 || l == 7 || l == 8 || l == 10; // 12
    bool sfarsitLuna = z == 28 || z == 29 || z == 30 || z == 31;

    if (sfarsitLuna) {
        if (l == 2) {
            if (z == 29) { zf = 1; lf = 3; af = a; }
            else if (z == 28) {
                if (bisect) { zf = 29; lf = 2; af = a; }
                else { zf = 1; lf = 3; af = a; }
            }
        }
        else if ((luna30 && z == 30) || (luna31 && z == 31))
            { zf = 1; lf = l + 1; af = a; }
        else if (l == 12 && z == 31) { zf = 1; lf = 1; af = a + 1; }
        else { zf = z + 1; lf = l; af = a; }
    }
    else { zf = z + 1; lf = l; af = a; }

    cout << zf << " " << lf << " " << af;

    return 0;
}