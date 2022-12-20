#include<bits/stdc++.h>
using namespace std;
bool PFnumber(int n,int digit)
{
	return(digit!=0&&n%digit==0);
}
bool PFdivider(int n)
{
	int flag=n;
	while(flag>0)
    {
		int digit=flag%10;
		if(!(PFnumber(n,digit)))
        {
			return false;
        }
		flag/=10;
	}
	return true;
}
int main()
{
	int n;
    cout<<"Enter the number\n";
    cin>>n;
	if (PFdivider(n))
    {
		cout<<"Yes";
    }
	else
    {
		cout<<"No";
    }
	return 0;
}