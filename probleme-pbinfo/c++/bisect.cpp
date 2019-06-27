#include <iostream>

int main() {
    int an;
    std::cin >> an;

    bool bisect1 = an % 4 == 0 && an % 100 != 0;
    bool bisect2 = an % 400 == 0;

    if (bisect1 || bisect2) { std::cout << "bisect"; }
    else { std::cout << "nebisect"; }

    return 0;
}