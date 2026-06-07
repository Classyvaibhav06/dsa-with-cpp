#include <iostream>
using namespace std;

int main(){
  int hight;
  cout<<"enter the height : ";
  cin>>hight;
  int yo=2*hight-1;
   int tmp=0;
  for(int i=0;i<hight-1;i++){
    //loop for space
    int j=hight-i-1;
    for(int i=0;i<j;i++){
      cout<<" ";
    }
    for(int k=0;k<=tmp;k++){
      cout<<"*";
      
    }
    cout<<""<<endl;
    tmp=tmp+2;
  }
  for(int i=0;i<hight;i++){
    //loop for space
    int j=hight-i-1;
    for(int l=0;l<i;l++){
      cout<<" ";
    }
    for(int k=yo;k>0;k--){
      cout<<"*";
      
    }
    cout<<""<<endl;
    yo=yo-2;
    
  }
  
  return 0;
}