/* 
   1111
   2222
   3333
         */
#include <iostream>
using namespace std;
 int main(){
    int b; 
    cin>>b;
    int k=1;
    while(k<=b){
        int l=1;
        while(l<=b){
            cout<<"*";
            l+=1;
        }
        cout<<endl;
        k+=1;
    }
 }
