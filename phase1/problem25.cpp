#include<iostream>
using namespace std;
int main(){
  int input;
  cout<<"enter the number :";
  cin>>input;
  int size=0;
  while(input!=0){
    input=input/10;
    size++;
  }
  cout<<size;
  
}
