#include<iostream>
using namespace std;
int main()
{
    int i;
    string S1,S2;
    cout<<"Enter the first and the second string\n";
    cin>>S1>>S2;
    if(S1.length()==S2.length())
    {
        int c=0;
        for(i=0;S1[i]!='\0';i++)
        {
            if(S1[i]!=S2[i])
            {
                c=1;
                cout<<"The strings are not equal.";
                break;
            }
            else
            {
                continue;
            }
        }
        if(c==0)
        {
            cout<<"The strings are equal";
        }
    }
    else
    {
        cout<<"The strings are not equal.";
    }
    return 0;
}