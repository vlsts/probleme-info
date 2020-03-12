#include <fstream>

const unsigned int maxLen = 10005;

int main() {
    std::ifstream inFile("afin.in");
    std::ofstream outFile("afin.out");
    char sir[maxLen];

    int cheie1, cheie2;
    inFile >> cheie1 >> cheie2;
    inFile.getline(sir, maxLen);
    inFile.getline(sir, maxLen);

    for (int i = 0; sir[i] != '\0'; i++) {
        outFile << (char) (((cheie1 * (sir[i] - 97) + cheie2) % 26) + 97);
    }

    return 0;
}