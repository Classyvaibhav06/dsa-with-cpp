#include <iostream>
using namespace std;
int main(){
  cout<<"enter the first number: ";
  int a;
  int b;
  int hcf=1;
  int lcm=1;
  cin>>a;
  cout<<"enter the second number: ";
  cin>>b;
  
  
  for(int i=2;i<=b;i++){
    if(a%i==0 && b%i==0){
      hcf=i;
    }
   
  }
  cout<<"lcm is : "<<(a*b)/hcf;



  return 0;
}

