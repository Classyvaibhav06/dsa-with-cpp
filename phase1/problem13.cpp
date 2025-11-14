#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//reverse the string
int main(){
  cout<<"enter your word : ";
  string str;
  cin>>str;
  string temp=str;
  for(int i=0;i<(str.length())/2;i++){
   str[i]=str[str.length()-1-i];
   str[str.length()-1-i]=temp[i];
   
  }
  cout<<str;
  return 0;
}
