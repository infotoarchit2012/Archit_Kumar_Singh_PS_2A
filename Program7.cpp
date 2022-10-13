#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the temperature in centigrade\n";
    cin>>t;
    if(t<0)
    {
        cout<<"Freezing weather";
    }
    else if(t>=0&&t<=10)
    {
        cout<<"Very cold weather";
    }
    else if(t>=11&&t<=20)
    {
        cout<<"Cold weather";
    }
    else if(t>=21&&t<=30)
    {
        cout<<"Normal in temperature";
    }
    else if(t>=31&&t<=39)
    {
        cout<<"Its hot";
    }
    else
    {
        cout<<"Its Very Hot";
    }
    return 0;
}