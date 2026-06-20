#include <iostream>
using namespace std;
#include <string>
int main(){
  int in;
  cout<<"whats the height :";
  cin>>in;
  int size =in;
  for(int i=0;i<in;i++){
    int a=65;
    int b=0;
   for(int j=size;j>0;j--){
    cout<<char(a+b);
    b++;
   }
   size--;
   cout<<endl;
  }
  return 0;
}