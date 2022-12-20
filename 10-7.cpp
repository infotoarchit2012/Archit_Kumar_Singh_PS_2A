#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R,r,c;
    cout<<"Enter the number of row and column\n";
    cin>>r>>c;
    if(r%2!=0)
    {
        R=(r-1)*5+(c-1)*2;
        cout<<"The number is: "<<R;
    }
    else
    {
        R=(r-2)*5+(2*c-1);
        cout<<"The number is: "<<R;
    }
    return 0;
}