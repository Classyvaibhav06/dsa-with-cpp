#include <iostream>
using namespace std;

int main(){
  int hight;
  cout<<"enter the height : ";
  cin>>hight;
  int yo=0;
  for(int i=0;i<hight;i++){
    //loop for space
    int j=hight-i-1;
    for(int i=0;i<j;i++){
      cout<<" ";
    }
    for(int k=0;k<=yo;k++){
      cout<<"*";
      
    }
    cout<<""<<endl;
    yo=yo+2;
  }
  return 0;
}