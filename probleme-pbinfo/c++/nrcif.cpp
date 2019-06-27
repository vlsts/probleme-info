#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x - 100 < 0) {
        if (x - 10 < 0) cout << "1";
        else cout << "2";
    }
    else cout << "3";

    return 0;
}