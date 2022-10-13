#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=n-1;
    cout<<"Enter the number of rows to enter\n";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=(2*(n-i)-1);k++)
        {
            cout<<"  ";
        }
        for(int l=i;l>=1;l--)
        {
            if(l==n)
            {continue;}
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}