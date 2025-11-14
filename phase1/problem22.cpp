#include<iostream>
using namespace std;
int main(){
  int infirst;
  int insecond;
  cout<<"enter the first limit of range :";
  cin>>infirst;
  cout<<"enter the second limit of range :";
  cin>>insecond;
  int sum = 0;
  for(int i=infirst;i<=insecond;i++){
    if(i%2!=0){
      sum+=i;
    }

  }
  cout<<"sum is :"<<sum;
}