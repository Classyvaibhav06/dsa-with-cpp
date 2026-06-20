#include <iostream>
using namespace std;
int main(){
  int in;
  cout<<"enter the height :";
  cin>>in;
  int space=in-1;
  for(int i=0;i<in/2+1;i++){
    for(int j=0;j<=i;j++){
      cout<<"#";
    }
    for(int k=0;k<space;k++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"#";
    }
    
    space=space-2;
    cout<<endl;
  }
   space=space+2;
  for(int i =0;i<in/2;i++){
    space=space+2;
    for(int j=in/2;j>i;j--){
      cout<<"#";
    }
    
    for(int k=0;k<space;k++){
      cout<<" ";
    }
    
    for(int j=in/2;j>i;j--){
      cout<<"#";
    }
   
    cout<<endl;
  }  
   return 0;
}