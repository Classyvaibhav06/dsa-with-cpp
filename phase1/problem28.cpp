#include<iostream>
using namespace std;
int main(){
  int in;
  cout<<"enter the number :";
  cin>>in;
  int digit=0;
  int fact =1;
  for(int i=0;i<in;i++){
   fact=fact*(in-i);
  }
  int sum=0;
  int temp=0;
  while(fact>0){
    temp=fact%10;
    sum+=temp;
    fact/=10;
  }
  cout<<sum;

}