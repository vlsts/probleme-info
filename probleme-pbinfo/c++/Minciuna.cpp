#include <iostream>
using namespace std;

int main(){
    int x, y,
        min, max;
    cin >> x >> y;

    if (x < y) {
        min = x;
        max = y;
    }
    else {
        min = y;
        max = x;
    }

    if (min % 2 == 0 && max == min + 1) cout << "Andrei e mai responsabil";
    else cout << "minciuna";

    return 0;
}
