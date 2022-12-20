#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"Enter the number\n";
    cin>>a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<"\nThe sum of the diviors are "<<sum<<"\n";
    if(sum==a)
    {
        cout<<"The number is a perfect number";
    }
    else
    {
        cout<<"The number is not a perfect number";
    }
    return 0;
}