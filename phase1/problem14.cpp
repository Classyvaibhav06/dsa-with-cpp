#include <iostream>
using namespace std;
#include <string>

//code for finding largest number in an array
int main(){
  cout<<"enter the numbers without any space and commmas: ";
  string str;
  cin>>str;
  int temp=0;
  int small= str[0];
  
  for(int i=0;i<str.length();i++){
   if((str[i]-'0')>temp){
    temp=(str[i]-'0');
   }
   if((str[i]-'0')<small){
    small=(str[i]-'0');
   }

  }
  cout<<"largest number is: "<<temp<<" ,smallest is : "<<small;
}