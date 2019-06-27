#include <iostream>

int main() {
	int laturaCutiei, inaltimeaCamerei, numarCutii;

	std::cin >> laturaCutiei >> inaltimeaCamerei;
	numarCutii = (inaltimeaCamerei - (inaltimeaCamerei % laturaCutiei)) / laturaCutiei;
	std::cout << numarCutii;
	return 0;
}