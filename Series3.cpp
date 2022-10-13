// Question:-        1 + x + x2/2! + x3/3! + x4/4!......
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n,f=1,x=1,sum=0;
    cout<<"Enter the number of terms to add\n";
    cin>>n;
	for (float i=1;i<=n;i++)
    {
        f=f*i;
        x=(pow(x,i)/f);
        sum=sum+x+1;
	}
    cout<<sum;
    return 0;
}