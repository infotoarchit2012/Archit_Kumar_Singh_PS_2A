#include<iostream>
using namespace std;
int FIBBO(int n)
{
	if(n<=1)
    {
		return n;
    }
	return FIBBO(n-1)+FIBBO(n-2);
}
int main()
{
	int n;
    cout<<"Enter the number of terms to generate the series: ";
    cin>>n;
	cout<<FIBBO(n);
	getchar();
	return 0;
}