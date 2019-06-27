#include <iostream>

int main() {
	int numarVagoane, marfaTotala, incarcatura;

	std::cin >> numarVagoane >> marfaTotala;
	incarcatura = marfaTotala / numarVagoane;
	std::cout << incarcatura;
	return 0;
}