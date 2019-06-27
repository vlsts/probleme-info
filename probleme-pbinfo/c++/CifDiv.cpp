#include <iostream>

using namespace std;

int main() {
    int n, m,
        c1, c2, c3,
        cifre = 0;

    cin >> n >> m;

    c3 = n % 10;
    c2 = (n / 10) % 10;
    c1 = n / 100;

    if (c1 != 0 && m % c1 == 0) cifre++;
    if (c2 != 0 && m % c2 == 0) cifre++;
    if (c3 != 0 && m % c3 == 0) cifre++;

    cout << cifre;

    return 0;
}
