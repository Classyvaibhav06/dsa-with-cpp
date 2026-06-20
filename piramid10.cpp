#include <iostream>
using namespace std;
int main(){
  int in;
  cout<<"enter the height :";
  cin>>in;
  int line=1;
  int mid1=in/2;
  int mid2=mid1+1;
  int space=0;
  for(int i=0;i<mid1;i++){
    
   for(int j=mid1;j>i;j--){
    cout<<"#";
   }
   for(int k=1;k<=space;k++){
    cout<<" ";
    
   }
   for(int j=mid1;j>i;j--){
    cout<<"#";
   }
   space=space+2;
   cout<<endl;
  }
  for(int i=0;i<mid1;i++){
    for(int j=0;j<=i;j++){
      cout<<"#";
    }
    space=space-2;
    for(int k=0;k<space;k++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<"#";
    }
    
   cout<<endl;
  }
  return 0;
}