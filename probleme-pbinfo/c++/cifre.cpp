#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = n % 10,
        c2 = (n / 10) % 10;

    cout << c1 + c2;

    return 0;
}
