#include <iostream>

int main(){
    int v1, v2;
    std::cin >> v1 >> v2;

    if (v1 > v2) std::cout << "Primul copil este mai mare cu "
                             << v1 - v2
                             << " ani";
    else if (v2 > v1) std::cout << "Al doilea copil este mai mare cu "
                             << v2 - v1
                             << " ani";
    else { std::cout << "Copiii au varste egale"; }

    return 0;
}