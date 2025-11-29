#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{

  string str;
  cout << "enter you word: ";
  getline(cin, str);

  int vovel = 0;
  int consonent = 0;
  for (int i = 0; i < str.length(); i++)
  {
    char ch = tolower(str[i]);
    if (ch >= 'a' && ch <= 'z')
    {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vovel++;
      }
      else
      {
        consonent++;
      }
    }
  }
  

  cout << "vovel is : " << vovel << " and consonent is : " << consonent;
  return 0;
}
