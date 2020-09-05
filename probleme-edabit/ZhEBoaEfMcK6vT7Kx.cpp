/*
    Problem: Valid Hex Code
    Author: Helen Yu
*/

bool isValidHexCode(std::string str) {
    if (str.length() != 7) return false;
    if (str.at(0) != '#') return false;
	std::string goodChars = "0123456789ABCDEFabcdef";
    for (int n = 1; n < str.length(); n++) {
        if (goodChars.find(str.at(n)) == std::string::npos) return false;
    }
    return true;
}