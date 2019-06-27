#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    char semn;

    cin >> n1
        >> n2
        >> semn;

    bool n1M = n1 > n2;

    if (semn == '+') cout << n1 + n2;
    else if (semn == '*') cout << n1 * n2;
    else if (semn == '-') {
        if (n1M) cout << n1 - n2;
        else cout << n2 - n1;
    }
    else if (semn == '/') {
        if (n1M) cout << n1 / n2;
        else cout << n2 / n1;
    }
    return 0;
}
