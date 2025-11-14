#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "enter your number: ";
  cin >> num;
  int temp = num;
  int count = 0;
  for (int n = num; n != 0; n /= 10)
  {
    count++;
  }
  int arr[count];
  for (int a = 0; a < count; a++)
  {
    arr[a] = temp % 10;
    temp /= 10;
  }
  for (int i = 0; i < count / 2; i++)
  {
    int tmp = arr[i];
    arr[i] = arr[count - 1 - i];
    arr[count - 1 - i] = tmp;
  }
  // for (int j = 0; j < count; j++)
  // {
  //   cout << arr[j];
  // }
  int sum=0;
  for(int k=0; k<count; k++)
  {
    sum+=arr[k]*arr[k]*arr[k];
  }
  if(sum==num){
    cout<<"Armstrong number";
  }
  else{
    cout<<"Not an Armstrong number";
  }
  return 0;
}