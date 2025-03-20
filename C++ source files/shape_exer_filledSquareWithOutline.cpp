#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout<<"Enter side of square: ";
	cin>>a;
	for (c=0; c<a+4; c++)
	{
		cout<<"* ";
	}
	cout<<"\n* ";
	for (c=0; c<a+2; c++)
	{
		cout<<"  ";
	}
	cout<<"* \n";
	for (c=0; c<a; c++)
	{
		cout<<"*   ";
		for (b=0; b<a; b++)
		{
			cout<<"* ";
		}
		cout<<"  *\n";
	}
	cout<<"* ";
	for (c=0; c<a+2; c++)
	{
		cout<<"  ";
	}
	cout<<"* \n";
	for (c=0; c<a+4; c++)
	{
		cout<<"* ";
	}
}
