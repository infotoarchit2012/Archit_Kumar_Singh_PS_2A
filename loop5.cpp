#include<iostream>
using namespace std;
int main()
{
    char i,j;
    char n;
    for(i='E';i>='A';i--)
    {
        n=i;
        for(j='E';j>=i;j--)
        {
            cout<<n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}