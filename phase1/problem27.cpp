#include<iostream>
using namespace std;
int main(){
  cout<<"how many lines you want ?";
  int in;
  cin>>in;
  int sum=1;
  for(int i=0;i<in;i++){
    for(int j=0;j<=i;j++){
      cout<<sum<<",";
      sum++;
    }
    cout<<endl;
  }
}