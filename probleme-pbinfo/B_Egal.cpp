int Egal(int n) {
   int clonaN = n;
   int oCifraImpara = 0;

   while (clonaN != 0) {
      int ultimaCifra = clonaN % 10;
      if (ultimaCifra % 2 == 1) {
         if (oCifraImpara == 0) oCifraImpara = ultimaCifra;
         else if (ultimaCifra != oCifraImpara) return 0;
      }
      clonaN /= 10;
   }

   return 1;
}