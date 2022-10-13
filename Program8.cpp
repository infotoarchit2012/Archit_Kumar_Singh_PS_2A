#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the coordinate\n";
    cin>>x>>y;
    if(x>0&&y>0)
    {
        cout<<"The point is in first quadrent";
    }
    else if(x<0&&y>0)
    {
        cout<<"The point is in second quadrent";
    }
    else if(x<0&&y<0)
    {
        cout<<"The point is in third quadrent";
    }
    else if(x>0&&y<0)
    {
        cout<<"The point is in fourth quadrent";
    }
    return 0;
}