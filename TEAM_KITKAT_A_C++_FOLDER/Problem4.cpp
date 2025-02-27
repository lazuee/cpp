#include <string>
#include <iostream>

using namespace std;

int main()
{

  while (1)
  {
    int base = 0, exponent = 0, exp, total;
    cout << "Enter number: ";
    cin >> base;

    cout << "Enter an exponent: ";
    cin >> exponent;
    exp = exponent;
    while (1)
    {
      for (int i = 0; i < exponent; i++)
      {
        total = base * exp;
      }

      break;
    }

    cout << "Total: " << total << endl;

    char yes;
    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> yes;
    if (yes == 'y')
    {
      continue;
    }
    else
    {
      total = 0;
      base = 0;
      break;
    }
    return 0;
  }
}
