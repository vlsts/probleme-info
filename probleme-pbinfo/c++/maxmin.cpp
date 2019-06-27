#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3,
        m, M;

    cin >> n1 >> n2 >> n3;
    m = min(min(n1, n2), n3);
    M = max(max(n1, n2), n3);
    cout << M - m;

    return 0;
}
