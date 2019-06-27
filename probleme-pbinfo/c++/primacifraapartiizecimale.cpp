#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a;
    cin >> a;

    cout << floor((a - (int) a) * 10);

    return 0;
}
