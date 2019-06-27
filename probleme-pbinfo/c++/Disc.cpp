#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <iomanip>

int main() {
   int raza;
   const double PI  = 3.141592653589793238463;
   float arie;
   float perimetru;

   std::cin >> raza;

   arie = PI * raza * raza;
   perimetru = 2 * PI * raza;

   std::cout << std::fixed << std::setprecision(6) << arie << " " << perimetru;
   return 0;
}