#include <iostream>

using namespace std;

int main() {
   int n;
   cin >> n;

   switch (n) {
      case 0:
         cout << 1;
         break;
      default:
         long long factorial = 1;
         for (int i = 1; i <= n; i++) factorial *= i;
         cout << factorial;
         break;
   }

   return 0;
}