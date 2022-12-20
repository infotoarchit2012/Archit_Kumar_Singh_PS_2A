#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,k,count,n,i,m,f=0,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    a=n;
    for(i=0;i<=n;i++)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"Sum is "<<sum<<endl;
	while(f<=a)
   	{
   		count=0;
    	if(a%f==0)
      	{
      		k=1;
      		while(k<=f)
      		{
      			if(f%k==0)
      			{
      				count++;
				}
				k++;
			}
			if(count==2)
			{
				cout<<f<<" is a Prime Factor\n";
			}
      	}
    	f++;
   	}
 	return 0;
}
