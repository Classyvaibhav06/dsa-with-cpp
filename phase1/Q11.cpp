#include <iostream>
using namespace std;

int main(){
  int hcf;
  int a;
  int b;
  cout<<"enter a :";
  cin>>a;
  cout<<"enter b :  ";
  cin>>b;
  int min;
  if(a>b)min=b;
  else min=a;
  for(int i=1;i<=min;i++){
    if(a%i==0 && b%i==0) hcf=i;
  }
  cout<<"lcm is :  "<<((a*b)/hcf);
}