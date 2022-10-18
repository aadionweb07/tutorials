
#include <iostream>
using namespace std;
 int main(){
    int a; 
    cin>>a;
    int k=1;
    while(k<=a){
        int l=1;
        while(l<=a){
            cout<<"*";
            l=l+1;
        }
        cout<<endl;
        k=k+1;
    }
 }
