#include <iostream>

using namespace std;

int main() {
    int zile_an, ore_zi, antene_final;

    cin >> zile_an >> ore_zi >> antene_final;

    int ore = antene_final % ore_zi;
    int zile = antene_final / ore_zi;
    int ani = zile / zile_an;
    zile = zile % zile_an;

    cout << ani << '\n' << zile << '\n' << ore;
    
}