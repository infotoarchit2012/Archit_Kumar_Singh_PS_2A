#include<iostream>
using namespace std;
int main()
{
    int i,n,s,r,e;
    cout<<"Enter the number of rows\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(s=0;s<=n-i;s++)
        {
            cout<<" ";
        }
        for(e=i;e>1;e--)
        {
            cout<<e;
        }
        for(r=1;r<=i;r++)
        {
            cout<<r;
        }
        cout<<"\n";
    }
    return 0;
}