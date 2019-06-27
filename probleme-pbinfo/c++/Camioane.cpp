#include <iostream>

int main() {
	int tonajC1, tonajC2, numarC1, numarC2, zile, total;

	std::cin >> tonajC1 >> tonajC2 >> numarC1 >> numarC2 >> zile;
	total = (tonajC1 * numarC1 + tonajC2 * numarC2) * zile;

	std::cout << total;
	return 0;
}