#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int c1 = a / 100,
        c2 = (a / 10) % 10,
        c3 = a % 10;

    cout << c3 * c3 + c2 * c2 + c1 * c1;

    return 0;
}
