#include<iostream>
using namespace std;
int main(){
  int count;
  cout<<"enter the position :";
  cin>>count;
  int first=0;
  int second=1;
  int temp;
  
  for(int i=1;i<=count-1;i++){
    int nxt = first+second;
    first=second;
    second=nxt;
    temp=nxt;
  }
  cout<<temp;

}
