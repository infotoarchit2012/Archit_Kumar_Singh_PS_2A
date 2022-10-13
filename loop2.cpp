#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"Enter the number of lines\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {  a=i;
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<"\n";
    }
    return 0;
}