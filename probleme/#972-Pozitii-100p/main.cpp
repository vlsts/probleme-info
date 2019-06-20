#include <iostream>
#include <string>

using namespace std;

int main() {
   string prop;
   int vocaleInconjConsoane = 0;
   const string vocale = "aeiou";
   getline(cin, prop);

   for (int i = 1; i <= prop.length() - 1 ; i++) {
      if (prop[i + 1] == ' ' || prop[i - 1] == ' ') continue;
      if (prop[i + 1] == '\0') break;
      
      if (vocale.find(prop[i]) != -1) {
         bool litInainteConsoana = vocale.find(prop[i - 1]) == -1;
         bool litDupaConsoana = vocale.find(prop[i + 1]) == -1;

         if (litInainteConsoana && litDupaConsoana) vocaleInconjConsoane++;
      } 
   }
   cout << vocaleInconjConsoane;
   return 0;
}