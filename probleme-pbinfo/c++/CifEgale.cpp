#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x % 111 == 0) { std::cout << "da"; }
    else { std::cout << "nu"; }

    return 0;
}