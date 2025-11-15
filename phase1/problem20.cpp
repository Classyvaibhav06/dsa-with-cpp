#include<iostream>
using namespace std;
int main(){
  cout<<"enter the number :>";
  int num;
  cin>>num;
  int temp=0;
  for(int i=1;i<=num/2;i++){
    if(num%i==0){
      temp++;
    }
  }
  int arr[temp];
  int j=0;
  //makinng array for storing the divisiors
  //testing 
  for(int i=1;i<=num/2;i++){
    if(num%i==0){
      arr[j]=i;
      j++;
    }
    
  }
  int sum=0;
  for(int i=0;i<temp;i++){
    sum=sum+arr[i];
  }
  if(num==sum){
    cout<<"its a perfect number"<<endl;
  }
  else{
    cout<<"its not a perfect number"<<endl;
  }
  return 0;
}