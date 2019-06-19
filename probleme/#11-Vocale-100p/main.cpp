#include <iostream>
#include <string>

using namespace std;

int main() {
   string sir;
   cin >> sir;

   string vocale = "aeiou";

   for (int i = 0; i < sir.length(); i++) {
      if (vocale.find(sir[i]) != -1) sir[i] = toupper(sir[i]);
   }

   cout << sir;

   return 0;
}