#include <iostream>

int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;

	int suma = a + b;
	int diferenta = a - b;
	int produs = a * b;
	int cat = a / b;
	std::cout << suma << " "
			  << diferenta << " " 
			  << produs << " " 
			  << cat;
	return 0;
}