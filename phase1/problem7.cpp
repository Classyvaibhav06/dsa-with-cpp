#include <iostream>
using namespace std;
int main(){
  cout<<"how much length of piramid you want: ";
  int in;
  cin>>in;
  int length = 1;
  for(int i=0;i<in;i++){
    //loop for space
    for(int k=i;k<in-1;k++){
      cout<<"  ";
    }

    for(int j=0;j<length;j++){
      cout<<"* ";
      
    }
    length=length+2;
    cout<<endl;
  }
return 0;

}