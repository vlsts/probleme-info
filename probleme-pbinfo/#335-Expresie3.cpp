#include <iostream>
using namespace std;

int main() {
   int n, suma = 0;
   cin >> n;

   for (int i = 1; i <= n; i++) {
      if (i % 2 == 1) suma += (i * (i + 1));
      else suma -= (i * (i + 1));
   }

   cout << "Rezultatul este " << suma;
   return 0;
}