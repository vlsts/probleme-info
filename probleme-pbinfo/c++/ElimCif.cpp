#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = n / 100,
        c3 = n % 10;

    cout << c1 * 10 + c3;

    return 0;
}
