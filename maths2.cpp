#include<bits/stdc++.h>
using namespace std;
int KTHdigit(int a,int b,int k)
{
	int p=pow(a,b);
	int flag=0;
	while(p>0&&flag<k)
    {
		int sqr=p%10;
		flag++;
		if (flag==k)
			return sqr;
		p=p/10;
	}
	return 0;
}
int main()
{
	int a,b,k;
    cout<<"Enter the number to enter\n";
    cin>>a>>b>>k;
	cout<<"The digit is: "<<KTHdigit(a,b,k);
	return 0;
}