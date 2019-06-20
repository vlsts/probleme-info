int fact (long cifra) {
    if (cifra == 0) return 1;
    
    int factorial = 1;
    for (int i = 1; i <= cifra; i++) factorial *= i;
    
    return factorial;
}

int sumfactcif (int numar) {
   if (numar == 0) return 1;
   
   int sumaFactCifrelor = 0, nr = numar;
   
   while (nr != 0) {
      int ultimaCifra = nr % 10;
      sumaFactCifrelor += fact(ultimaCifra);
      nr /= 10;
   }

   return sumaFactCifrelor;
}