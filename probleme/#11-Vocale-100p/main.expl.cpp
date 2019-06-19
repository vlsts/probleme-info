// se include biblioteca "iostream"
#include <iostream>
// se include biblioteca "string"
#include <string>

// se foloseste namespace-ul std (a.i nu mai e nevoie sa se scrie std::cin, std::cout, etc.)
using namespace std;

int main() {
   // se declara sirul de caractere "sir"
   string sir;
   // se citeste acest sir, presupunand ca nu contine spatii
   cin >> sir;

   // se declara sirul de caractere "aeiou" sub numele de "vocale"
   string vocale = "aeiou";

   // pentru i = 0 pana la marimea sirului (exclusiv), valoarea lui i crescand dupa fiecare iteratie
   for (int i = 0; i < sir.length(); i++) {
      // daca litera este regasita in sirul de vocale (este vocala) atunci acea litera devine litera mare
      if (vocale.find(sir[i]) != -1) sir[i] = toupper(sir[i]);
   }

   // se scrie sirul rezultat
   cout << sir;

   // se inchide programul cu succes
   return 0;
}

/*
Resurse suplimentare:
   - pt a intelege conditia de pe randul 21 puteti verifica urmatoarele resurse:
      - http://www.cplusplus.com/reference/string/string/find/
      - http://www.cplusplus.com/reference/string/string/npos/
   - pt documentatia bibliotecii string:
      - http://www.cplusplus.com/reference/string/string/
 */