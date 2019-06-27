#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ofstream out;
    out.open("maxim3.out", ios::out);

    ifstream in;
    in.open("maxim3.in", ios::in);

    int n1, n2, n3;

    in >> n1 >> n2 >> n3;
    out << max(max(n1, n2), n3);

    in.close();
    out.close();

    return 0;
}
