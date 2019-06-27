#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    bool pozitive = x > 0 && y > 0;
    bool negative = x < 0 && y < 0;

    if (pozitive || negative) { std::cout << "da"; }
    else { std::cout << "nu"; }

    return 0;
}