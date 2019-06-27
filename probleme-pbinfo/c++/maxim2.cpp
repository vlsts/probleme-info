#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ofstream out;
    out.open("maxim.out", ios::out);

    ifstream in;
    in.open("maxim.in", ios::in);

    int n1, n2;

    in >> n1 >> n2;
    out << max(n1, n2);

    in.close();
    out.close();

    return 0;
}
