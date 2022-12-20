#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,b,h;
    cin>>l>>b;
    h=__gcd(l,b);
    cout<<((l*b)/(h*h));
    return 0;
} 