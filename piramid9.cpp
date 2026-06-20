#include <iostream>
using namespace std;
int main(){
  int in;
  cout<<"enter the height :";
  cin>>in;
  int num=65;
  for(int i=0;i<in;i++){
    for(int j=0;j<=i;j++){
      cout<<char(num);
    }
    num++;
    cout<<endl;
  }
  return 0;
}