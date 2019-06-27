#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int c1 = x % 10,
        c2 = (x / 10) % 10,
        c3 = x / 100;

    bool c2Mc3 = c2 > c3;
    bool c2Mc1 = c2 > c1;
    bool c1Mc3 = c1 > c3;



    if (c2Mc3 && c2Mc1) cout << c2;
    else if (!c2Mc1 && c2Mc3) cout << c1;
    else cout << c3;

    return 0;
}