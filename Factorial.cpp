#include <iostream>
using namespace std;
int main()
{
int n,fact=1;
cout<<"Enter a number: ";
cin>>n;
for(;n>=1;n=n-1)
{
fact=fact*n;
}
cout<<fact;
}