#include <iostream>
using namespace std;
int main(){
  cout<<"enter the first number: ";
  int a;
  int b;
  int hcf;
  cin>>a;
  cout<<"enter the second number: ";
  cin>>b;

if(a>b){
  for(int i=2;i<=a;i++){

    if(a%i==0 &&b%i==0){
      hcf=i;
    }
  }
}
else if (b>a){
  for(int i=2;i<=b;i++){

    if(a%i==0 &&b%i==0){
      hcf=i;
    }
  }
}

  cout<<"hcf is : "<<hcf;



  return 0;
}
