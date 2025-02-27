#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
  double spent, discount, total;

  std::cout << "How much did you spent:" << std::endl;
  std::cin >> spent;

  if (spent < 50)
  {
    std::cout << "Your total spent is: " << spent << std::endl;
    std::cout << "No discount is appied. ";
  }
  else if (spent >= 50 && spent <= 100)
  {
    discount = spent * 0.05;
    total = spent - discount;

    std::cout << "Your total spent is: $" << total << std::endl;
    std::cout << "Your discount is: $" << discount;
  }
  else if (spent > 100)
  {
    discount = spent * 0.10;
    total = spent - discount;

    std::cout << "Your total spent is: $" << total << std::endl;
    std::cout << "Your discount is: $" << discount;
  }

  return 0;
}
