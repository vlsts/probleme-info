#include <iostream>

int main(){
    int limita1, limita2, x;
    std::cin >> limita1 >> limita2 >> x;

    if ((limita1 <= x) && (x <= limita2)) { std::cout << "DA"; }
    else { std::cout << "NU"; }
    return 0;
}
