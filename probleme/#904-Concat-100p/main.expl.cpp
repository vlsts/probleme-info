#include <iostream>
#include <string>

using namespace std;

string concat(int numar1, int numar2) {
   string n1String = to_string(numar1);
   string n2String = to_string(numar2);

   return n1String + n2String;
}

int main() {
   int numar1, numar2;
   cin >> numar1 >> numar2;
   cout << concat(numar1, numar2);
   return 0;
}