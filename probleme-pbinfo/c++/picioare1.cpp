#include <iostream>

using namespace std;

int main() {
    int c, p;
    cin >> c >> p;

    int o = (p - 2 * c) / 2,
        g = c - o;

    cout << g << " " << o;

    return 0;
}
