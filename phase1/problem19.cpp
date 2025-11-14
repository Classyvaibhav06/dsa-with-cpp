// #include<iostream>
// using namespace std;
// //checking prime number in range
// int main(){
//   int first;
//   int second;
//   cout<<"enter the first limit : ";
//   cin>>first;
//   cout<<""<<endl;
//   cout<<"enter the second limit : ";
//   cin>>second;
//   cout<<""<<endl;
//   for(int i=first;i<=second;i++){
//     for(int j=2;j<i;j++){

//       }

//     }
//   }

// }

#include <iostream>
using namespace std;

// program for checking number is prime or not
int main()
{
  int first;
  int second;
  cout << "enter the first limit : ";
  cin >> first;
  cout << "" << endl;
  cout << "enter the second limit : ";
  cin >> second;
  for (int i = first; i <= second; i++)
  {
    int input = i;

    int isprime = true;
    for (int i = 2; i < input; i++)
    {

      if (input % i == 0)
      {
        isprime  = false;
        break;
      }
    }
    if (isprime)
    {

      cout<<input<<",";
    }
  }

  return 0;
}
  