#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle\n";
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a)
    {
        cout<<"The triangle is equilateral";
    }
    else if(a==b||b==c||a==c)
    {
        cout<<"The triangle is isoceles";
    }
    else
    {
        cout<<"The triangle is scalene";
    }
    return 0;
}
