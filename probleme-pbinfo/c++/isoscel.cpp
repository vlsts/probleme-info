#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) cout << "Nu formeaza triunghi";
    else if (a + b <= c || a + c <= b || b + c <= a) cout << "Nu formeaza triunghi";
    else if (a == b && b == c) cout << "Nu formeaza triunghi isoscel";
    else if ((a == b && b != c) || (a == c && b != c) || (b == c && c != a)) cout << "Formeaza triunghi isoscel";
    else cout << "Nu formeaza triunghi isoscel";
    return 0;
}