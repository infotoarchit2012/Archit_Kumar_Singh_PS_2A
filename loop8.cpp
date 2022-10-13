#include<iostream>
using namespace std;
int main()
{
    int i,n=4,h,s,r;
    for(i=1;i<=n;i++)
    {
        for(int s=0;s<=n-i;s++)
        {
            cout<<"  ";
        }
        for(h=i;h<2*i-1;h++)
        {
            cout<<"# ";
        }
        for(r=2*i-1;r>=i;r--)
        {
            cout<<"# ";
        }
        cout<<"\n";
    }
    return 0;
}