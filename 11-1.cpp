#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,x1,x2,y,y1,y2,m,i,j;
    cin>>x1>>x2>>y1>>y2;
    m=((y2-y1)/(x2-x1));
    for(i=min(x1,x2)+1;i<max(x1,x2);i++)
    {
        for(j=min(y1,y2)+1;j<max(y1,y2);j++)
        {
            if(x=((y-y1)/m)+x1)
            {
                cout<<"("<<x<<",";
            }
            if(y=m*(x-x1)+y1)
            {
                cout<<y<<")"<<endl;
            }
        }
    }
    return 0;
}