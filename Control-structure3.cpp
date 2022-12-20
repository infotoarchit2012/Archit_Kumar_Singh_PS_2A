#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"Enter the character\n";
    cin>>alpha;
    if(alpha=='A'||alpha=='a'&&alpha=='E'||alpha=='e'&&alpha=='I'||alpha=='i'&&alpha=='O'||alpha=='o')
    {
        cout<<"The alphabet is a vowel";
    }
    else
    {
        cout<<"The alphabet is a consonent";
    }
}