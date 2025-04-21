#include <iostream>
using namespace std;
int main(){
int n,rev=0,original,digit;
cout<<"Enter a number to check whethere its pallindrome or not: ";
cin>>n;
original=n;
while(n>0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
if(rev==original)
{
cout<<"Palindrome";
}
else{
cout<<"Not a Pallindrome";
}
}