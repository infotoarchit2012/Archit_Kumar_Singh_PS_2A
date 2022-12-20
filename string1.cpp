#include<iostream>
using namespace std;
int FindLength(char str[]);
int FindLength(char str[])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return(length);
}
int main()
{
    char str[100];
    int Length;
    cout<<"Enter the String:\n";
    gets(str);
    Length=FindLength(str);
    cout<<"Length of the String is: "<<Length;
    return(0);
}