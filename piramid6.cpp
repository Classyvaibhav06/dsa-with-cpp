#include <iostream>
using namespace std;
int main(){
  int height;
  cin>>height;
  for(int i=0;i<height;i++){
    char ch='A';
    for(int j=0;j<=i;j++){
      cout<<ch;
      ch++;
    }
    cout<<endl;
  }
  return 0;
}