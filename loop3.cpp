#include<iostream>
using namespace std;
int main()
{
    char i,j;
    int n;
    for(i='A';i<='C';i++)
    {
        n=i;
        for(j='A';j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}