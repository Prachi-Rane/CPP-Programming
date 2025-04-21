#include <iostream>
using namespace std;
int main(){
int i,n,product=1;
cout<<"Enter a Number: ";
cin>>n;
for(i=1;i<=n;i=i+1){
product=product*i;
}
cout<<"Product of "<<n<<" is"<<product;
}