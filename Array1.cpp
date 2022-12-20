#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cout<<"Enter the number\n";
    cin>>t;
    while(t--)
    {
	    int n;
        cout<<"Enter the values of the number\n";
        cin>>n;
	    int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
	    cout<<*min_element(a,a+n)<<'\n';
	}
	return 0;
}