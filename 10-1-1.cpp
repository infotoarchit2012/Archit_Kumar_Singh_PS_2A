#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,s;
    cout<<"Enter the number of the rows and columns\n";
    cin>>r>>c;
    s=((r/2)+(r%2))*((c/2)+(c%2));
    cout<<"The minimum number of supplies required: "<<s;
    return 0;
}