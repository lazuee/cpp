#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
int num1, prevodd = 0, preveven = 0;
  for (int i = 0; i < 1000; i++)
  {
    cout<<"Input a number: ";
    cin>>num1;

    if((num1 % 2) == 1) {
      prevodd = num1 + prevodd;
      cout << "^ (odd)" << endl;
    } else {
      preveven = num1 + preveven;
      cout << "^ (even)" << endl;
    }


    char yes;
    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> yes;
    if (yes == 'y')
    {
      continue;
    }
    else
    {
     cout << "total sum of even: " << preveven << endl;

     cout << "total sum of odd: " << prevodd;
      break;
    }
  }

  return 0;
}
