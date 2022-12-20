#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,flag=0;
    char c;
    string s;
    cout<<"Enter the sentence or the word\n";
    getline(cin,s);
    cout<<"Enter the letter to check the frequency\n";
    cin>>c;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==c)
        flag++;
    }
    cout<<"Frequency of alphabet "<<c<<" in the string is "<<flag;
    return 0;
}
