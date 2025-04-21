#include <iostream>
using namespace std;
int main(){
int n,count=0,i=1;
cout<<"Enter a number: ";
cin>>n;
while(i<=n)
{
if(n%i==0)
{
count++;
}
i++;
}
if(count==2)
{
cout<<"It is a prime number";
}
else
{
cout<<"Number is not a prime number";
}


}