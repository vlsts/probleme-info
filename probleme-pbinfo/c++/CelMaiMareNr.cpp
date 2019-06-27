int cmmnr(int nr) {
   int clonaNr = nr;
   int cifre = 0;
   int auxiliar;
   
   while (clonaNr != 0) {
      cifre++;
      clonaNr /= 10;
   }

   clonaNr = nr;

   int cifreNumar[cifre];

   for (int i = 0; i < cifre; i++) {
      cifreNumar[i] = clonaNr % 10;
      clonaNr /= 10;
   }

   for (int i = 0; i < cifre; i++) {
      for (int j = i + 1; j < cifre; j++) {
         if (cifreNumar[i] < cifreNumar[j]) {
            auxiliar = cifreNumar[i];
            cifreNumar[i] = cifreNumar[j];
            cifreNumar[j] = auxiliar;
         }
      }
   }

   int numarFinal = 0;

   for (int i = 0; i < cifre; i++) numarFinal = numarFinal * 10 + cifreNumar[i];

   return numarFinal;
}