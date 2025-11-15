#include<iostream>
using namespace std;
//checkin prime number in range
int main(){
  int input;
  cout<<"enter the number :";
  cin>>input;
  for(int num=2;num<input;num++){
    bool isprime=true;
    for(int i=2;i<num;i++){
      if(num%i==0){
        isprime=false;
        break;
      }
    }
    if(isprime){
      cout<<num<<",";
    }
    
  }
  
}