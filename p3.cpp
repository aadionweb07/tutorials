/*                        1
                2       3       2
        3       4       5       4       3
4       5       6       7       6       5       4
*/
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the no. of lines required to print\t";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
            cout<<"\t";
        for(k=i;k<(2*i-1);k++)
            cout<<k<<"\t";
        for(int m=k;m>=i;m--)
            cout<<m<<"\t";
        cout<<endl;
    }
    return 0;
}
