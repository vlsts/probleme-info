#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int c1 = a / 10,
        c2 = a % 10;

    cout << c1 + c2;

    return 0;
}
