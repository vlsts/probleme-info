#include <iostream>
#include <string>

int main() {
   std::string propozitie1, propozitie2;

   std::getline(std::cin, propozitie1);
   std::getline(std::cin, propozitie2);

   int lungimeaPrimeiPropozitii = propozitie1.length();

   for (int i = 0; i < lungimeaPrimeiPropozitii; i++) {
      char caracterP1 = propozitie1[i];

      if (propozitie2.find(caracterP1) != -1) std::cout << caracterP1;
   }

   return 0;
   
}