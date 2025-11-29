#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int>  findmissing(vector <int> arr,int n){
  vector <int> missing;
  for(int i=1;i<=n;i++){
    if(find(arr.begin(),arr.end(),i)==arr.end()){
      missing.push_back(i);
    }
   
  }
  return missing;
}



int main(){
  vector <int> arr = {1,2,3,4,6};
  int n = 5;

  vector<int> result = findmissing(arr, n);

    for (int r : result) {
        cout << r << " ";
    }
}
