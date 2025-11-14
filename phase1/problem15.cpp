#include <iostream>
using namespace std;
#include <string>
//sorting arrya in assending order
int main(){
  cout<<"enter the numbers without any comma and spaces: ";
  string str;
  cin>>str;
  int arr[str.length()];
  for(int i=0;i<str.length();i++){
    arr[i]=(str[i]-'0');
  }
  //example [1,2,5,4,3]
  for(int i=0;i<str.length()-1;i++){
    int max=arr[i];
    for(int j=i+1;j<str.length();j++){
      if(max>arr[j]){
        arr[i]=arr[j];
        arr[j]=max;
        max=arr[i];
      }
    }
    

     
  }
  for(int i=0;i<str.length();i++){
    cout<<arr[i]<<"";
  }
  
}