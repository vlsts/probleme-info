#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = n / 100,
        c2 = n % 10;

    cout << pow(c1 * 10 + c2, 2);

    return 0;
}
