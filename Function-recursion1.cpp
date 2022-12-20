#include<iostream>
using namespace std;
int palindrome(int x)
{
    int i,int y,int n,int rev=0;
    x==y;
    for(i=0;i<n;i++)
    {
        y=n%10;
        rev=rev*10+y;
        y=y/10;
    }
    if(x==rev)
    {
        cout<<"The number is a palindrome.";
    }
    else
    {
        cout<<"The number is not a palindrome.";
    }
}
int main()
{
    int num,p;
    cout<<"Enter the number to find the palindrome\n";
    cin>>num;
    num=palindrome(p);
    cout<<num;
    return 0;
}