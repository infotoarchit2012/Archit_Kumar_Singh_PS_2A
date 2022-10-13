#include<iostream>
using namespace std;
int main()
{
	int n=5,f=1,sum=0;
	for (int i=1;i<=n;i++)
    {
		f=f*i;
		sum=sum+(f/i);
	}
    cout<<"The sum is "<<sum;
    return 0;
}