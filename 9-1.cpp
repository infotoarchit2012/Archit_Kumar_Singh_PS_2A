#include<iostream>
using namespace std;
int nthterm(int n)
{
    return(8*n*n)+1;
}
int main()
{
    int n;
    cout<<"Enter the term you want to find\n";
    cin>>n;
    cout<<"The series is 9, 33, 73, 129...\n";
    cout<<n<<"th term of the series is "<<nthterm(n);
    return 0;
}