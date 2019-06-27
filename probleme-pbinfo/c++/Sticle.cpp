#include <iostream>

int main(){
    int volumSticle,
        volumDesfacute,
        volumVas,
        sticleDeschise = 0;

    std::cin >> volumSticle >> volumVas;
    volumDesfacute = volumSticle;

    while(volumDesfacute < volumVas) {
        volumDesfacute += volumSticle;
        sticleDeschise++;
    }

    std::cout << sticleDeschise + 1;
    return 0;
}