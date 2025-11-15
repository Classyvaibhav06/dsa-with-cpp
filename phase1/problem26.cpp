#include<iostream>
#include <cmath>
using namespace std;
int main(){
  int input;
  cout<<"enter the number :";
  cin>>input;
  int temp=input;
  int digit=0;
  int x=input;
  while(input!=0){
    input=input/10;
    digit++;
  }
  
  int arr[digit];
  for(int i=digit-1;i>=0;i--){
    arr[i]=temp%10;
    temp=temp/10;
  }
  
  int sum =0;
  // cout<<pow(arr[0],digit);
  for(int i=0;i<digit;i++){
    sum=sum+(int)round(pow(arr[i],digit));
  }
  
  if(sum==x){
    cout<<"its a Narcissistic number";
  }
  else{
    cout<<"its not a Narcissistic number";
  }

}