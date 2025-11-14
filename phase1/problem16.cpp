#include <iostream>
#include <string>
using namespace std;
int main(){
  cout<<"enter the numbers without spaces and comma: ";
  string input;
  cin>>input;
  int  size=input.length();
  int arr[size];
  int sum=0;
     
  for(int i=0;i<size;i++){
    arr[i]=(input[i]-'0');
    sum=arr[i]+sum;
    
  }
  cout<<"sum is : "<<sum;
}