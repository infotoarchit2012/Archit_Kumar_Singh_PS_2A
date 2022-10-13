#include<iostream>
using namespace std;
int fibbo(int);
int fibbo(int y)
{
    if(y==1)
    {
        return 0;
    }
    else if(y==2)
    {
        return 1;
    }
    else
    {
        return(fibbo(y-1)+fibbo(y-2));
    }
}
int main()
{
    int i,n,x;
    cout<<"Enter the number to generate series\n";
    cin>>n;
    cout<<"The term is ";
    for(i=1;i<=n;i++)
    {
        x=fibbo(i);
        cout<<x<<"\n";
    }
}
