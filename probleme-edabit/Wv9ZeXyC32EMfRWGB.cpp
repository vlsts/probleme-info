/*
    Problem: C*ns*r*d Str*ngs
    Author: Matt
*/

std::string uncensor(std::string str, std::string vowels) {
	int index_vocale = 0;
    std::string string_final = "";
    if (vowels.length() == 0) return str;
    for (int n = 0; n < str.length(); n++) {
        if (str.at(n) == '*') string_final += vowels[index_vocale++];
        else string_final += str.at(n);
    }
    return string_final;
}