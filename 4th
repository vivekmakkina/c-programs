#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
class arr
{
	float ar;
	public:
		area(float r)
		{
			ar=3.14*r*r;
		}
		area(float l,float b)
		{
			ar=l*b;
		}
		area(float a,float b,float c)
		{
			float s;
			s=(a+b+c)/2;
			ar=s*(s-a)(s-b)(s-c);
			ar=pow(ar,0.5);
		}
		void display()
		{
			cout<<"area"<<ar;
		}
};
int main()
{
	int ch;
	int x,y,z;
	do
	{
	cout<<"\n 1.area of triangle";
	cout<<"\n 2.area of rectangle";
	cout<<"\n 3.area of square";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"enter the radius of triangle";
				cin>>x;
				area a1(x);
				a1.display()}
				break;
		case 2:
			{
				cout<<"enter the length & breadth of rectangle";
				cin>>x>>y;
				area a2(x,y);
				a2.display()
			}
			break;
		case 3:
			{
				cout<<"enter the side of square";
				cin>>x>>y>>z;
				area a3(x,y,z);
				a3.display()
			}
			break;
		default:
			cout<<"invalid";
			break;
			
	}
}
while(ch!=4);
	return 0;
}
