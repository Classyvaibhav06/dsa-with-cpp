#include <iostream>
using namespace std;
int main(){
  int height;
  int num=1;
  cout<<"enter the height of the piramid :  ";
  cin>>height;
  for(int i=1;i<=height;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num++;
    }
    
    cout<<endl;
  }
  return 0;
}