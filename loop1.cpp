#include<iostream>
using namespace std;
int main()
{
    int i,j,a;
    for(i=1;i<=4;i++)
    {  
        a=i;
        for(j=1;j<=i;j++)
        {
            cout<<a;
            a++;
        }
        cout<<"\n";
    }
    return 0;
}