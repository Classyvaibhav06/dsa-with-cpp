#include <iostream>
using namespace std;
#include <string>
int main()
{
  cout << "enter the height";
  int in;
  cin >> in;
  string tmp="";
  int p=0;
  for (int i = 0; i < in; i++)
  {
    tmp += to_string(i + 1);
    cout <<tmp;
    for (int j = p; j <= in*2  - 3;j++)
    {
      cout << " ";
      
    }
    p=p+2;
    for(int k=tmp.length()-1;k>=0;k--){
     cout<<tmp[k]<<"";
    }
cout << endl;
}
return 0;
}