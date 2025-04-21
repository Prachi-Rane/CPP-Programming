#include <iostream>
using namespace std;
int main(){
int n,sum=0,product=1,digit;
cout<<"Enter a Number: ";
cin>>n;
while(n>0)
{
digit=n%10;
if(digit%2==0)
{
sum=sum+digit;
}
else{
product=product*digit;
}
n=n/10;
}
cout<<"The Sum is"<<sum<<"\n";
cout<<"The Product is"<<product;
}