#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ifstream input("codjoc.in");
    ofstream output("codjoc.out");
    long long nr;
    long long nr_final = 0;
    int cifre = 0;

    input >> nr;
    input.close();

    long long nr_clona = nr;
    while (nr_clona != 0) {
        nr_clona /= 10;
        cifre++;
    }

    for (int i = 0; i <= cifre; i++) {
        nr_final += nr % (int) (pow(10, i));
    }

    output << nr_final;

    output.close();
    return 0;
}