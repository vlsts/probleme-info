#include <iostream>

int main() {
    int x, cifreImpare = 0;
    std::cin >> x;

    for (int i = 0; i < 3; i++) {
        if (x % 2 != 0) { cifreImpare++; }
        while (x % 10 > 0) { x--; }
        x = x / 10;
    }

    std::cout << cifreImpare;
    return 0;
}