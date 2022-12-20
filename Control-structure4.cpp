#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year\n";
    cin>>y;
    (y%4==0&&y%100!=0||y%400==0)?cout<<"It is a leap year":cout<<"It is not a leap year";
    return 0;
}