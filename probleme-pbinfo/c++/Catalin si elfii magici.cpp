#include <iostream>
#include <fstream>

using namespace std;

ifstream input("elfii.in");
ofstream out("elfii.out");

int main() {
    int cifre[3], combinatii[6],
        mx = 1, nrPare = 0, cifrePare = 0, cifreZero = 0;

    input >> cifre[0] >> cifre[1] >> cifre[2];

    for (int i = 0; i < 3; i++) {
        if (cifre[i] % 2 == 0) cifrePare++;
        if (cifre[i] == 0) cifreZero++;
    }

    if (cifreZero == 3 || cifrePare == 0) out << "Poate data viitoare!";
    else {
        int c1 = cifre[0],
            c2 = cifre[1],
            c3 = cifre[2];
        combinatii[0] = c3 + c2 * 10 + c1 * 100;
        combinatii[1] = c3 + c1 * 10 + c2 * 100;
        combinatii[2] = c2 + c3 * 10 + c1 * 100;
        combinatii[3] = c2 + c1 * 10 + c3 * 100;
        combinatii[4] = c1 + c2 * 10 + c3 * 100;
        combinatii[5] = c1 + c3 * 10 + c2 * 100;
        for (int i = 0; i < 6; i++) {
            if (combinatii[i] % 2 == 0 && combinatii[i] / 100 >= 1) {
                	mx = max(mx, combinatii[i]);
                    nrPare++;
            }
        }
        out << nrPare << endl << mx;
    }

    return 0;
}
