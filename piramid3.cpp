#include <iostream>
using namespace std;

int main(){
int in;
cin>>in;
 bool tmp=true;
  for(int i=0;i<=in;i++){
   
   if(i%2==0){
     tmp=false;
   }

   for(int j=0;j<=i;j++){
    if(tmp){
      cout<<"0 ";
       tmp=false;
    }
    else{
      cout<<"1 ";
       tmp=true;
    }
   }
   cout<<endl;
  }
  return 0;
}