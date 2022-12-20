#include <iostream>
using namespace std;
bool Perfect(int n)
{
	int i=0;
	int sum=0;
	while(i++<n)
	{
		if(n%i==0&&i<n)
		{
			sum=sum+i;
		}
	}
	return sum==n;
}
int main()
{
	float first;
	float second;
	cout<<"Enter the first number of the range "<<endl;
    cin>>first;
	cout<<"Enter the second number of the range "<<endl;
    cin >> second;
	cout<<"Perfect numbers between "<<first<<" and "<<second<<" is:"<<" ";
	for(int i=first;i<=second;i++)
	{
		if(Perfect(i))
		{
			cout<<i<<" ";
		}
	}
	return 0;
}