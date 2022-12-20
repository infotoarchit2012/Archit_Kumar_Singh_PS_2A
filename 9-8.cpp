#include<iostream>
using namespace std;
int TrailingZeroes(int n)
{
    int i,flag=0;
	if (n < 0)
    {
		return -1;
    }
	for (i=5;n/i>=1;i=i*5)
		flag=flag+n/i;
	return flag;
}
int main()
{
	int n;
    cout<<"Enter the number\n";
    cin>>n;
	cout << "Number of trailing 0s in "<<n<<"! is "<<TrailingZeroes(n);
	return 0;
}