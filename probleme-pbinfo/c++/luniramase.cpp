#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    cin >> x;

    string
        l1 = "Ianuarie",
        l2 = "Februarie",
        l3 = "Martie",
        l4 = "Aprilie",
        l5 = "Mai",
        l6 = "Iunie",
        l7 = "Iulie",
        l8 = "August",
        l9 = "Septembrie",
        l10 = "Octombrie",
        l11 = "Noiembrie",
        l12 = "Decembrie";

    if (x == 1) { cout << l2 << endl; x++; }
    if (x == 2) { cout << l3 << endl; x++; }
    if (x == 3) { cout << l4 << endl; x++; }
    if (x == 4) { cout << l5 << endl; x++; }
    if (x == 5) { cout << l6 << endl; x++; }
    if (x == 6) { cout << l7 << endl; x++; }
    if (x == 7) { cout << l8 << endl; x++; }
    if (x == 8) { cout << l9 << endl; x++; }
    if (x == 9) { cout << l10 << endl; x++; }
    if (x == 10) { cout << l11 << endl; x++; }
    if (x == 11) { cout << l12 << endl; x++; }

    return 0;
}