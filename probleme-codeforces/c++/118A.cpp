#include <iostream>
#include <string>
 
int main()
{
  std::string cuvant;
  const std::string vocale = "AOYEUIaoyeui";
 
  std::cin >> cuvant;
 
  for (int i = 0; i < cuvant.length(); i++)
  {
    if (vocale.find(cuvant[i]) == std::string::npos)
    {
      if (cuvant[i] >= 'A' && cuvant[i] <= 'Z')
        cuvant[i] = (char)(cuvant[i] + 32);
 
      std::cout << '.' << cuvant[i];
    }
  }
}