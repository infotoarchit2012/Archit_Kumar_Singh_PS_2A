#include<iostream>
using namespace std;
int main()
{
    int i,n,h=0;
    cout<<"Enter the number of people\n";
    cin>>n;
    for(i=n-1;i>0;i--)
    {
        h+=i;
    }
    cout<<"The number of handshakes are: "<<h;
    return 0;
}