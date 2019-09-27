#include <iostream>
#include <string>

int main()
{
  int numarCuvinte;
  std::cin >> numarCuvinte;

  std::string cuvinte[numarCuvinte];
  for (int i = 0; i < numarCuvinte; i++)
  {
    std::cin >> cuvinte[i];
  }

  int lungimeCuvant;

  for (int i = 0; i < numarCuvinte; i++)
  {
    lungimeCuvant = cuvinte[i].length();
    if (lungimeCuvant > 10)
    {
      cuvinte[i] = (cuvinte[i][0]) + std::to_string(lungimeCuvant - 2) + (cuvinte[i][lungimeCuvant - 1]);
    }

    std::cout << cuvinte[i] << '\n';
  }
}