#include<iostream>
using namespace std;
int main()
{  
    string S;
    int i,W=0;
    int lenOfS=S.size();
    cout<<"Enter the string\n";
    cin>>S;
    for(i=0;i<lenOfS;i++)
    {
        if(S[i]==' ')
        {
            W++;
        }
    }
    W++;
    cout<<"Number of words is: "<<W<<endl;
}