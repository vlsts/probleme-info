#include <iostream>

int main(){
    int numar;
    std::cin >> numar;

    if (numar % 2 == 0) { std::cout << numar << " este par"; }
    else { std::cout << numar << " este impar"; }
    return 0;
}