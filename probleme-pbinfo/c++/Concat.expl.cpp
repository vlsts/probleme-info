// se include biblioteca "iostream"
#include <iostream>
// se include biblioteca "string"
#include <string>

// se foloseste namespace-ul std (a.i nu mai e nevoie sa se scrie std::cin, std::cout, etc.)
using namespace std;

// se declara functia "concat" care returneaza un string, avand ca parametrii "numar1" si "numar2" de tip int
string concat(int numar1, int numar2) {
   // se converteste numar1 in string si este pus in variabila "n1String"
   string n1String = to_string(numar1);
   // se converteste numar2 in string si este pus in variabila "n2String"
   string n2String = to_string(numar2);

   // se returneaza primul numar convertit in string unit cu cel de-al doilea convertit in string
   return n1String + n2String;
}

// se declara functia programului
int main() {
   // se declara numerele "numar1" si "numar2" de tip int
   int numar1, numar2;
   // se citesc cele doua numere, "numar1" si "numar2" de la tastatura
   cin >> numar1 >> numar2;
   // se apeleaza functia "concat" cu cei doi parametri ai iei fiind "numar1" si "numar2" si se scrie rezultatul pe ecran
   cout << concat(numar1, numar2);
   // se inchide programul cu succes
   return 0;
}