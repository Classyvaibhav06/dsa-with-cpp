#include <iostream>
using namespace std;
int main()
{
  cout << "enter the number that you wish to get the factoriel: ";
  int in;
  cin >> in;
  int temp = in;
  int output = 1;
  if (in == 0)
  {
    cout << "factoriel is : 1";
  }
  else
  {
    for (int i = 0; i < in; i++)
    {
      output = output * temp;
      temp--;
    }
    cout << "factriel is : " << output;
  }

  return 0;
}