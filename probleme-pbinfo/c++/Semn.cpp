#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x < 0) { std::cout << "negativ"; }
    else if (x > 0) { std::cout << "pozitiv"; }
    else { std::cout << "nul"; }

    return 0;
}
