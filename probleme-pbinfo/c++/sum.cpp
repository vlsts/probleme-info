#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ofstream out;
    out.open("sum.out", ios::out);

    ifstream in;
    in.open("sum.in", ios::in);

    int n1, n2;

    in >> n1 >> n2;
    out << n1 + n2;

    in.close();
    out.close();

    return 0;
}
