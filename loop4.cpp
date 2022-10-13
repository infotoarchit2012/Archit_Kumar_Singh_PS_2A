#include<iostream>
using namespace std;
int main()
{
    char i,j;
    char n;
    for(i='A';i<='D';i++)
    {
        n=i;
        for(j='A';j<=i;j++)
        {
            cout<<n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}