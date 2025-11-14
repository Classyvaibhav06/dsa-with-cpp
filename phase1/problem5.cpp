#include <iostream>
using namespace std;
int main()
{
  int limit;
  cout << "Enter the limit: ";
  cin >> limit;
  int a = 0;
  int b = 1;

  int i;
  int arr[limit];
  arr[0] = a;
  arr[1] = b;
  int stop=1;
  for (i = 2; i < limit; i++)
  {
    if(a+b<limit){
    arr[i] = a + b;
    int next = a + b;
    a = b;
    b = next;
    stop++;
    } 
  }
  for(int j=0;j<=stop;j++){
    cout<<arr[j]<<" ";
  }
}