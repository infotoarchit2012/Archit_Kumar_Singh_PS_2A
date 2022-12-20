#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,s;
    cout<<"Enter the number of rows and columns\n";
    cin>>r>>c;
    if(r%2==0&&c%2==0)
    {
        cout<<"The minimum supplies required: "<<((r*c)/4);
    }
    else if(r%2!=0&&c%2==0)
    {
        cout<<"The minimum supplies required: "<<((((r-1)*c)/4)+(c/2));
    }
    else if(c%2!=0&&r%2==0)
    {
        cout<<"The minimum supplies required: "<<((((c-1)*r)/4)+(r/2));
    }
    else
    {
        cout<<"The minimum supplies required: "<<((((r-1)*(c-1))/4)+((r+c)/2));
    }
    return 0;
}