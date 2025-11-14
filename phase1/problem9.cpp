#include <iostream>
#include <string>
using namespace std;
int main(){
  cout<<"enter the number: ";
  string str;
  cin>>str;
  int length = str.length();
  int sum=0;
  for(int i=0;i<length;i++){
    sum=sum+(str[i]-'0');
  }
  cout<<"sum of digits is: "<<sum;

}