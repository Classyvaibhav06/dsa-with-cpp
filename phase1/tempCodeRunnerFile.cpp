#include <iostream>
using namespace std;

int main(){
  int in;
  cout<<"enter the number";
  cin>>in;
  bool isprime=true;
  for(int i=2;i<=in/2;i++){
    if(in%i==0){
      isprime=false;
      break;
    }
  }
  if(isprime){
    cout<<"number is prime"<<endl;
  }
  else{
    cout<<"not prime";
  }
  return 0;
}