#include <iostream>

using namespace std;

int main() {
    int pret_cutie;
    int bani;
    
    cin >> pret_cutie >> bani;

    cout << bani / pret_cutie << ' ' << pret_cutie - (bani % pret_cutie);

    return 0;
}