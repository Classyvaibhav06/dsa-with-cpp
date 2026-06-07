#include <iostream>
using namespace std;
int main(){
  int in;
  int out=1;
  cout<<"enter the number :  ";
  cin>>in;
  for(int i=0;i<in;i++){
    out=out*(in-i);
    if(in-i==1) break;
  }
  cout<<"factoriel is : "<<out;
  return 0;
}