#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0)
    {
        for(i=n;i!=(n%2==0);i++)
        {
        n=n/2;
        }
    }
    else
    {
        n--;
        for(i=n;i!=(n%2==0);i++)
        {
            n=n/2;
        }
    }
    cout<<n;
    return 0;
}