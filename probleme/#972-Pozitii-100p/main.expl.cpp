// se include biblioteca "iostream"
#include <iostream>
// se include biblioteca "string"
#include <string>

// se foloseste namespace-ul std (a.i nu mai e nevoie sa se scrie std::cin, std::cout, etc.)
using namespace std;

// se declara functia programului
int main() {
   // se declara sirul de caractere "prop"
   string prop;
   // se declara variabila "vocaleInconjConsoane" de tip int cu valoarea initiala 0
   int vocaleInconjConsoane = 0;
   // se declara sirul constant "vocale" cu valoarea "aeiou"
   const string vocale = "aeiou";
   // se citeste propozitia si se pune in variabila "prop"
   getline(cin, prop);

   // pentru i = 1 pana la lungimea propozitiei - 1 (inclusiv), valoarea lui i crescand dupa fiecare iteratie cu 1 (de la a doua litera pana la penultima)
   for (int i = 1; i <= prop.length() - 1 ; i++) {
      // daca caracterul de dupa sau dinainte este un spatiu sa se sara acest for
      if (prop[i + 1] == ' ' || prop[i - 1] == ' ') continue;
      // daca caracterul de dupa sau dinainte este un caracter nul sa se inchida acest for
      if (prop[i + 1] == '\0') break;
      
      // daca litera este vocala (daca litera se regaseste in sirul "vocale")
      if (vocale.find(prop[i]) != -1) {
         // verifica daca litera de dinainte este consoana
         bool litInainteConsoana = vocale.find(prop[i - 1]) == -1;
         // verifica daca litera de dupa este consoana
         bool litDupaConsoana = vocale.find(prop[i + 1]) == -1;

         // daca amandoua conditiile se indeplinesc, creste contorul vocalelor inconjurate de consoane
         if (litInainteConsoana && litDupaConsoana) vocaleInconjConsoane++;
      } 
   }
   // scrie numarul de vocale inconjurate de consoane
   cout << vocaleInconjConsoane;
   // se inchide programul cu succes
   return 0;
}

/*
Resurse suplimentare:
   - pt a intelege "<string>.find()" puteti verifica urmatoarele resurse:
      - http://www.cplusplus.com/reference/string/string/find/
      - http://www.cplusplus.com/reference/string/string/npos/
   - pt documentatia bibliotecii string:
      - http://www.cplusplus.com/reference/string/string/
 */