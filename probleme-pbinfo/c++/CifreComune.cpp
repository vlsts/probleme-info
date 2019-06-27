#include <iostream>

using namespace std;

int main() {
    int n, m,
        c1n, c2n,
        c1m, c2m;

    cin >> n >> m;

    c1n = n % 10;
    c2n = n / 10;
    c1m = m % 10;
    c2m = m / 10;

    if (c1n == c1m || c1n == c2m || c2n == c1m || c2n == c2m) cout << "da";
    else cout << "nu";

    return 0;
}
