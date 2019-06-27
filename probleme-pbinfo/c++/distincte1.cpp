#include <iostream>
using namespace std;
int main(){
    int x, y, z, distincte = 1;
    cin >> x >> y >> z;
    if (x != y) distincte++;
    if (x != z) distincte++;
    cout << distincte;
    return 0;
}