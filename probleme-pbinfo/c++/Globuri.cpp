#include <iostream>

int main() {
	int globuriAlbe, globuriRosii, globuriVerzi, total;
	std::cin >> globuriAlbe;
	globuriRosii = globuriAlbe * 2;
	globuriVerzi = globuriRosii - 3;
	total = globuriAlbe + globuriRosii + globuriVerzi;

	std::cout << total;
	return 0;
}