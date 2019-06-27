#include <iostream>

int main() {
	int caini, pisici, gaini, total;

	std::cin >> caini;

	pisici = caini * 2;
	gaini = pisici * 2;
	total = caini + pisici + gaini;

	std::cout << total;
	return 0;
}