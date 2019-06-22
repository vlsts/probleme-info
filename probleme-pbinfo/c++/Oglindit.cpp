#include <iostream>

int oglindit(int numar) {
   int clonaNumar = numar;
   int nrOglindit = 0;

   while (clonaNumar != 0) {
      nrOglindit = nrOglindit * 10 + clonaNumar % 10;
      clonaNumar /= 10;
   }
   
   return nrOglindit;
}