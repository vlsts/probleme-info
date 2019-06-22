#include <iostream>

int main() {
   int numarInitial, cateNumereDeAdunat;

   std::cin >> numarInitial >> cateNumereDeAdunat;

   int clonaNumar = numarInitial;
   int nrDeAdunat;

   for (int i = 1; i <= cateNumereDeAdunat; i++) {
      std::cin >> nrDeAdunat;
      clonaNumar += nrDeAdunat;
   }

   if (numarInitial == clonaNumar) std::cout << "DA";
   else std::cout << "NU";

   return 0;
}