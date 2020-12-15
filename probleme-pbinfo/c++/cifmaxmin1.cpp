#include <fstream>

using namespace std;

bool par(int nr) { return nr % 2 == 0; }

pair<int, int> cifre(int nr) {
    pair<int, int> max_min;

    int cif_max = 0;
    int cif_min = 10;

    while (nr != 0) {
        if (cif_max < nr % 10) cif_max = nr % 10;
        if (cif_min > nr % 10) cif_min = nr % 10;
        
        nr /= 10;
    }

    return {cif_min, cif_max};
}

int main() {
    ifstream input("cifmaxmin.in");
    ofstream output("cifmaxmin.out");
    int nr_cartonase;
    int nr_pare = 0;
    int nr_impare = 0;
    int par_mare = 0;
    int impar_mic = 1000000000;
    int nr_format;

    input >> nr_cartonase;
    int cartonas_extras;

    for (int i = 0; i < nr_cartonase; i++) {
        input >> cartonas_extras;
        pair<int, int> _cifra = cifre(cartonas_extras);
        if (par(cartonas_extras)) {
            nr_format = _cifra.second * 10 + _cifra.first;
            par_mare = max(par_mare, nr_format);
            nr_pare++;
        }
        else {
            nr_format = _cifra.first * 10 + _cifra.second;
            impar_mic = min(impar_mic, nr_format);
            nr_impare++;
        }
    }
    input.close();

    output
        << par_mare << ' '
        << nr_pare << ' '
        << impar_mic << ' '
        << nr_impare;

    output.close();
    return 0;
}