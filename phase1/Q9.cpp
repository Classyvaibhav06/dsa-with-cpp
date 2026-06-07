#include <iostream>
using namespace std;
int main(){
  int in;
  cout<<"enter the number :";
  cin>>in;
  int sum=0;
  while(in!=0){
   sum=sum+in%10;
   in/=10;
  }
  cout<<"sum is :  "<<sum;
  return 0;
}
