#include <fstream>

using namespace std;

int bomboane[100][100];

int main() {
    ifstream input("robot.in");
    ofstream output("robot.out");
    int cerinta, nrbomboane;
    pair<int, int> laturi;
    int _d;
    int distincte = 0;
    int cutii = 1000000;

    input >> cerinta;
    input >> nrbomboane;

    for (int i = 0; i < nrbomboane; i++) {
        input >> laturi.first >> laturi.second;
        _d = laturi.first;
        if (laturi.first > laturi.second) {
            laturi.first = laturi.second;
            laturi.second = _d;
        }
        bomboane[laturi.first][laturi.second]++;
        if (bomboane[laturi.first][laturi.second] == 1) distincte++;
    }
    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            if (bomboane[i][j] == 0) continue;
            cutii = min(cutii, bomboane[i][j]);
        }
    }
    if (cerinta == 1) output << distincte;
    else output << cutii;
}