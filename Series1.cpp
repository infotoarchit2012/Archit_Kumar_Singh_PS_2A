#include<iostream>
using namespace std;
int main()
{
	int n,f=1,sum=0;
    cout<<"Enter the number of terms to add\n";
    cin>>n;
	for (int i=1;i<=n;i++)
    {
		f=f*i;
		sum=sum+f;
	}
    cout<<sum;
    return 0;
}