#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int x,y;
    cout<<"Enter the number to find out the factorial\n";
    cin>>x;
    y=factorial(x);
    cout<<"The factorial is "<<y;
    return 0;
}
