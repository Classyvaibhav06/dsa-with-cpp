#include <iostream>
using namespace std;


int main(){
  int a=0;
  int b=1;
  int next=a+b;
  int limit;
  cout<<"enter the limit :";
  cin>>limit;
  int arr[limit];
  arr[0]=a;
  arr[1]=b;

  for(int i=2;i<limit;i++){
    arr[i]=a+b;
    next=a+b;
    a=b;
    b=next;
    
  
  }
  for(int i=0;i<limit;i++){
    if(arr[i]>limit) break;
    cout<<arr[i]<<" ";
  }
  return 0;
}