#include<iostream>
using namespace std;
int digSum(int n)
{
	int Sum=0;
	while(n>0||Sum>9)
	{
		if(n==0)
		{
			n=Sum;
			Sum=0;
		}
		Sum+=n%10;
		n/=10;
	}
	return Sum;
}
int main()
{
	int n;
    cout<<"Enter the number\n";
	cout<<digSum(n);
	return 0;
}
