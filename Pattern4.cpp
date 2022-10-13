#include<iostream>
using namespace std;
int main()
{
    int mat[10][10],i,j,k,n;
    for(i=0;i<=2*n-2;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<mat[i][j];
        }
    }
    return 0;
}