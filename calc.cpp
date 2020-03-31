// to design a four func calculator.

#include<iostream>
using namespace std;

class add
{
	public:
		void sum(int a,int b)
		{
		cout<<"the sum is :"<<a+b;
		}

};

class mul
{
	public:
		void prod(int a,int b)
		{
		cout<<"The product is: "<<a*b;
		}
};

int main()
{
int s,a,b;
cout<<"Enter the 1 to add \n 2 to subtract \n 3 to multiply\ 4 to divide.";
cin>>s;
switch(s)
{
case 1:	{
	add ob;
	cout <<"\n Enter two numbers:";
	cin>>a>>b;
	ob.sum(a,b);
        }
case 3: {
	mul ob;
	cout<<"\n Enter two numbers: ";
	cin>>a>>b;
	ob.prod(a,b);
	}
}
return 0;
}
