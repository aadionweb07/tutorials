  /*
       123
       456
       789
            */
  
  #include<iostream>
 using namespace std;
 int main(){
    int x,y;
    cin>>x;
    int count=1;
 
    int i=1;
    while(i<=x){
        int j=1;
        while(j<=x){
            cout<< count;
            count++;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
 }
