/*
    Problem: Mystery Challenge
    Author: CppPythonDude
*/

std::string mysteryFunc(int n) {
 	int palindrom = 0, clona_n = n;
    int last_parsed_digit, nr = 0;
    std::string string_final = "";
    while (clona_n != 0) {
        palindrom = palindrom * 10 + clona_n % 10;
        clona_n /= 10;
    }
    last_parsed_digit = palindrom % 10;
    while (palindrom != 0) {
        if (palindrom % 10 != last_parsed_digit) {
            string_final += nr + 48;
            string_final += last_parsed_digit + 48;
            last_parsed_digit = palindrom % 10;
            nr = 1;
        }
        else nr++;
        palindrom /= 10;
    }
    string_final += nr + 48;
    string_final += last_parsed_digit + 48;
    return string_final;
}