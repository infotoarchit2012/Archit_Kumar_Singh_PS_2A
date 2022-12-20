#include<iostream>
using namespace std;
int main()
{
    string S;
    int i,length,flag=0;
    cout<<"Enter a string: ";
    cin>>S;
    length=S.lenght();
    for(i=0;i<S.length();i++)
    {
        if(S[i]!=S[S.length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<S<<" is not a palindrome"<<endl; 
    }    
    else
    {
        cout<<S<<" is a palindrome"<<endl; 
    }
    system("pause");
    return 0;
}