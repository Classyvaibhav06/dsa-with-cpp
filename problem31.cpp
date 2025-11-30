#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  for (int i = 0; i < 4; i++)
  {
    int in = 1;
    for (int j = 0; j <= i; j++)
    {

      cout<<in;
      in=in* (i - j) / (j + 1);
      

  }
  cout<<endl;
}
}