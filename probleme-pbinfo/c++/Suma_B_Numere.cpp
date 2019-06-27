#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int gauss = (b * (b + 1)) / 2;

    if ((a - gauss) % b == 0) cout << "DA";
    else cout << "NU";

    return 0;
}