//sort array
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>arr={2,42,4,53,24,52};
  int size=arr.size();
  for(int i=0;i<size;i){
   for(int j=0;j<size;j++){
    if(arr[j]>arr[j+1]){
      swap(arr[j], arr[j+1]);
    }
   }
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<",";
  }
  return 0;
}