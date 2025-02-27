#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{

  int num = 1;

  cout << "All prime numbers from 1 to 350:" << endl;
  while (num < 350)
  {
    do
    {
      for (int i = 0; num < 350; i++)
      {
        cout << num;
        num = num + 2;
        if (num < 350)
        {
          cout << ", ";
        }
      }
    } while (num < 350);
  }

  return 0;
}