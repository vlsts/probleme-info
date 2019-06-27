#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    cin >> x;

    int sqrtX = sqrt(x);
    if (sqrtX * sqrtX == x) cout << "DA";
    else cout << "NU";

    return 0;
}