#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int in;
  int sum=0;
  cout<<"enter the number : ";
  cin>>in;
  int copy=in;
  int origin=in;
  int counter=0;
  while(in!=0){
    in=in/10;
    counter++;
  }
  while(copy != 0){
    sum = sum + round(pow(copy % 10, counter));
    copy=copy/10;
  }
  if(sum==origin)
  {
    cout<<"it iss";
  }
  else {
    cout<<"it iss not";
  }
  cout<<sum;
  return 0;

}