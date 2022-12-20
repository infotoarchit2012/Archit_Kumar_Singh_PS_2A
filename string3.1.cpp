#include <bits/stdc++.h>
using namespace std;
string SPalindrome(string S)
{
	string P;
    P=S;
	reverse(P.begin(),P.end());
	if(S==P)
    {
		return"It is a palindrome.";
	}
	else
    {
		return"It is not a palindrome.";
	}
}
int main()
{
	string S;
    cout<<"Enter the string to check: ";
    cin>>S;
	cout<<SPalindrome(S);
	return 0;
}