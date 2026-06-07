#include <iostream>
using namespace std;
#include <string>

int main(){
  string in;
  cout<<"enter the input :  ";
  cin>>in;
  string rev = in;
  int size = in.length();
  for(int i=0;i<size;i++){
    rev[size-i-1]=in[i];
  }
  if(in==rev)
  {
    cout<<"its palindrome";

  }
  else{
    cout<<"its not";

  }
  return 0;
  
}