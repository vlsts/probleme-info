#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sqrtN = sqrt(n);

    if (sqrtN * sqrtN == n) cout << "da";
    else cout << "nu";

    return 0;
}