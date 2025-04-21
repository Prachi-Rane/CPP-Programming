#include <iostream>
using namespace std;
int main(){
int n,rev;
cout<<"Enter a Number to Revrese: ";
cin>>n;
while(n>0)
{
rev=n%10;
cout<<rev;
n=n/10;
}

}