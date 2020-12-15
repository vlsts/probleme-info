#include <iostream>

using namespace std;

int main() {
    int a, b, c, n, m, p;

    cin >> a >> b >> c >> n >> m >> p;

    cout << (long long) (a*n + b*m + c*p);
    return 0;
}