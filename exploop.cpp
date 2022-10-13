#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    for(x=1;x<=2;x++)
    {
        for(z=0;z<=2-x;z++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}