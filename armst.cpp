#include<iostream>
using namespace std;
int main()
{
	int m,n,a,b=0;
	cout<<"enter the number";
	cin>>n;
	m=n;
	while(n>0)
	{
		a=n%10;
		b+=a*a*a;
		n/=10;
	}
	n=b;
	
	if(n==m)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not amstrong";
	}
	
}
