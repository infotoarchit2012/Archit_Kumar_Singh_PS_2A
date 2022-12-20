#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j,flag=0;
    cout<<"Enter the number\n";
    cin>>a;
    for(i=2;i<=a;i++)
    {
        flag=0;
        for(int j=1;j<i;j++)
        {
            cout<<"1";
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}