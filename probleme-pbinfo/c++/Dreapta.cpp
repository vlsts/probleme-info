#include <iostream>

using namespace std;

int main() {
    int x1, y1,
        x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (y1 == y2) cout << "orizontala";
    else if (x1 == x2) cout << "verticala";
    else cout << "oblica";

    return 0;
}
