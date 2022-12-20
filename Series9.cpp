#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the number of terms to print series\n";
    cin>>t;
    while(t--)
    {
       int i,j,n;
       cin>>n;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<" ";
       }
       cout<<endl;
    }
    return 0;
}