#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=1;k<=2*a-1;k++)
        {
            cout<<"  ";
        }
        a--;
        for(int l=1;l<=i;l++)
        {
            if(l==n)
            {continue;}
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}