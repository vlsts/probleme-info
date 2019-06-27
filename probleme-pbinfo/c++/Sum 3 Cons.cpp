#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if ((n - 3) % 3 == 0) {
        int nr = (n - 3) / 3;
        cout << nr << " " << nr + 1 << " " << nr + 2;
    }
    else cout << "NU EXISTA";
    return 0;
}