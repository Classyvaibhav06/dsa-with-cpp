#include <iostream>
using namespace std;

// program for checking number is prime or not
int main(){
  cout<< "enter your number ";
  int input;
  cin >> input;
  int isprime = true;
  for(int i=2;i<input;i++){
    
    if(input%i==0){
      cout << "num is not prime"<<endl;
      isprime = false;
      break;
    }
    
   
    
  }
  if(isprime){

    cout<<"number is prime"<<endl;
  }


  return 0;
}