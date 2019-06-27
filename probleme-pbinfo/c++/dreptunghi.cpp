#include <iostream>

int main() {
   int l1, l2;
   
   std::cin >> l1 >> l2;
   int P, A, D;

   P = (l1 + l2) * 2;
   A = l1 * l2;
   D = l1 * l1 + l2 * l2;

   std::cout << P << " " << A << " " << D;
}