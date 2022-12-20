#include <bits/stdc++.h>
using namespace std;
int PSS(int n)
{
	double sum=0;
	for(int i=1;i<=n;i++) 
    {
		if(i&1)
        {
			sum+=(double)i/(i+1);
		}
		else
        {
			sum-=(double)i/(i+1);
		}
	}
	cout<<sum<<endl;
}
int main()
{
	int n;
    cout<<"Enter the number of terms you have to find the sum of\n";
    cin>>n;
	PSS(n);
	return 0;
}
