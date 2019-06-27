#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) cout << n + 2 << " " << n + 4;
    else cout << n + 1 << " " << n + 3;
    return 0;
}