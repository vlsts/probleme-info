#include <iostream>

int main(){
    int a, b, c;
    bool amb = false,
         amc = false,
         bmc = false;
    std::cin >> a
             >> b
             >> c;
    if (a < b) { amb = true; }
    if (a < c) { amc = true; }
    if (b < c) { bmc = true; }

    if (amb && amc) { std::cout << a; }
    else if (!amb && bmc) { std::cout << b; }
    else { std::cout << c; }

    return 0;
}