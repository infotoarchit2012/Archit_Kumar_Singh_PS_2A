#include <bits/stdc++.h>
using namespace std;
void BalancedNumber(string s)
{
	int i,lts=0,rts=0;
	for (i=0;i<s.size()/2;i++)
    {
		lts=lts+(s[i]-'0');
		rts=rts+(s[s.size()-1-i]-'0');
	}
	if(lts==rts)
		cout<<"Balanced"<<endl;
	else
		cout<<"Not Balanced"<<endl;
}
int main()
{
	string s;
    cout<<"Enter the number\n";
    cin>>s;
	BalancedNumber(s);
	return 0;
}