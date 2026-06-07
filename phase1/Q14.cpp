#include <iostream>
using namespace  std;
int main(){
  int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
  }
   int min=arr[0];
  int max=arr[0];
  for(int i=0;i<4;i++){
   if(arr[i]>max){
    max=arr[i];
   }
   if(arr[i]<min){
    min=arr[i];
   }
  }
  cout<<"min is  : "<<min<<endl;
  cout<<"max is :"<<max;
  return 0;
}