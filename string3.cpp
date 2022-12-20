#include <bits/stdc++.h>
using namespace std;
string SPalindrome(string S)
{
    int i;
	for(i=0;i<S.length()/2;i++)
    {
		if(S[i]!=S[S.length()-i-1])
        {
			return"It is not a palindrome.";
		}
        else
        {
	        return"It is a palindrome.";
        }
	}
}
int main()
{
	string S;
    cout<<"Enter the string you want to check: ";
    cin>>S;
	cout<<SPalindrome(S);
	return 0;
}
