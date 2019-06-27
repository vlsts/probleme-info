#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = n / 10,
        c2 = n % 10;

    cout << pow(c2 * 10 + c1, 2);

    return 0;
}
