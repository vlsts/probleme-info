#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long nfin = 1;
    for (int i = 0; i < 16; i++) {
        nfin *= n;
    }
    std::cout << nfin;
    return 0;
}