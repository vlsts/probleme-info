#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    bool mic15 = a <= 15;
    bool i16_30 = a >= 16 && a <= 30;
    int sumaCifrelor = a / 10 + a % 10,
        prodCifrelor = (a / 10) * (a % 10);

    if (mic15) cout << a * a;
    else if (i16_30) cout << sumaCifrelor;
    else cout << prodCifrelor;
    return 0;
}