#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float B, b, l;

    cin >> B >> b >> l;

    float portiuneB = (B - b) / 2;
    float bazaTrDiagonala = portiuneB + b;
    float hTrapez = sqrt(l * l - portiuneB * portiuneB);
    float diagonala = sqrt(hTrapez * hTrapez + bazaTrDiagonala * bazaTrDiagonala);

    cout << diagonala;

    return 0;
}
