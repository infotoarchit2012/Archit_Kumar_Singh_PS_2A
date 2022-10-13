// Question      x- x3/3! + x5/5! - x7/7!........ 
#include<bits\stdc++.h>
using namespace std;
int main()
{
    float x=1,f,sum=0;
    int n;
    cout<<"Enter the number of terms to add\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f=2*i-1;
        int d=f;
        for(int j=1;j<i;j++)
        {
            f=f*j;
        }
         if(i%2==0)
        {
            sum=sum-(pow(x,d))/f;
        }
        else
        {
            sum=sum+(pow(x,d))/f;
        }
    }
    cout<<sum;
    return 0;
}