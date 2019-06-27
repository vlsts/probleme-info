#include <iostream>

long long fact (int n) {
    long long calcul = 1;
    if (n == 0) return calcul;
    for (int i = 1; i <= n; i++) calcul *= i;
    return calcul;
}
