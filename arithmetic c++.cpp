#include<iostream>
using namespace std;
int main()
{
	int x,a,b,c;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"enter the choise:";
	cin>>x;
	switch(x)
	{
		case 1:
			c=a+b;
			cout<<"addition="<<c;
			break;
		case 2:
			c=a-b;
			cout<<"subtration="<<c;
			break;
		case 3:
			c=a*b;
			cout<<"multiplication="<<c;
			break;
		case 4:
			c=a/b;
			cout<<"division:"<<c;
			break;
	}
}
