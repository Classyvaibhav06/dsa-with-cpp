#include <iostream>
#include <string>
using namespace std;

int main() {
    string in;

    cout << "Enter: ";
    getline(cin,in);
    string tmp ="";
    for(int i=in.length()-1;i>=0;i--){
        tmp=tmp+in[i];

    }
    
        cout<<tmp;
    return 0;
}