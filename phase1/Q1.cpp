#include <iostream>
using namespace std;

int main()
{
  int input;
  cout << "enter the number :";
  cin >> input;

  if (input % 2 == 0)
  {
    cout << "number is even" << endl;
  }
  else
  {
    cout << "number is odd";
  }
  return 0;
}
