#include <iostream>
using namespace std;
#include <algorithm>

int main(){
  cout<<"enter the num or word that you want to check: ";
  string in;
  cin>>in;
  string rev=in;
  reverse(rev.begin(),rev.end());
  if(in==rev){
    cout<<"it is a palindrome";
  }
  else{
    cout<<"it is not a palindrome.";
  }
  cout<<endl;

  return 0;
}