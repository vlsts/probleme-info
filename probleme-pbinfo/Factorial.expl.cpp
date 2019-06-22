// se include biblioteca "iostream"
#include <iostream>

// se foloseste namespace-ul std (a.i nu mai e nevoie sa se scrie std::cin, std::cout, etc.)
using namespace std;

// se declara functia programului
int main() {
   // se declara variabila n de tip int fara valoare initiala
   int n;
   // se citeste n
   cin >> n;

   // se aplica instructiunea switch variabilei "n"
   switch (n) {
      // in situatia in care n are valoarea 0 (echivalent cu if (n == 0))
      case 0:
         // se scrie 1 (0! = 1 precum spune problema)
         cout << 1;
         // se iese din situatie 
         break;
      // in cazul in care niciun caz de mai sus nu se aplica (echivalent cu else)
      default:
         // se declara variabila de tip long long "factorial" cu valoarea initiala 1 (elementul neutru al inmultirii)
         long long factorial = 1;
         // pentru i = 1 pana la n (inclusiv), valoarea lui i crescand cu 1 dupa fiecare iteratie, valoarea factorialului devine valoarea precedenta * i
         for (int i = 1; i <= n; i++) factorial *= i;
         // se scrie numarul obtinut
         cout << factorial;
         // se iese din situatie
         break;
   }

   // se inchide programul cu succes
   return 0;
}