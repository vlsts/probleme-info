#include <iostream>
#include <math.h>

using namespace std;

int nrmaxim(int numar) {
   int clonaNumar = numar;
   int nrMax = numar;
   int cifreNumar = 0;

   while (clonaNumar != 0) {
      cifreNumar++;
      clonaNumar /= 10;
   }

   clonaNumar = numar;

   do {
      int faraPrimaCifra = clonaNumar % (int) pow(10, cifreNumar - 1);
      int primaCifra = clonaNumar / pow(10, cifreNumar - 1);

      clonaNumar = faraPrimaCifra * 10 + primaCifra;

      if (clonaNumar > nrMax) nrMax = clonaNumar;
   } while (clonaNumar != numar);

   return nrMax;
}