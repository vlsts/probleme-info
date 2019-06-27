#include <iostream>

int main() {
	int a, b, ultimaCifra;
	std::cin >> a;
	std::cin >> b;

	ultimaCifra = (a + b) % 10;
	std::cout << ultimaCifra;
	return 0;
}