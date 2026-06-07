#include <iostream>
using namespace std;
#include <string>
int main(){
  string in;
  cout<<"enter ";
  cin>>in;
  int con=0;
  int vow=0;
  int ln=in.length();
  for(int i=0;i<ln;i++){
    if(in[i]==' ') {
      continue;
    }
    if(in[i]=='a' ||in[i]=='e' ||in[i]=='i' ||in[i]=='o' ||in[i]=='u'){
      vow++;
    }
    else{
      con++;
    }
  }
  cout<<"vow : "<<vow;
  cout<<"con : "<<con;
  return 0;
}