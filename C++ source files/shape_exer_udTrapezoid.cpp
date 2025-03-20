#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e;
	cout<<"Enter the height: ";
	cin>>a;
	e=a+a-1;
	for (b=0; b<a; b++)
	{
		for (c=0; c<b; c++)
		{
			cout<<"  ";
		}
		for (d=0; d<e; d++)
		{
			cout<<"*   ";
		}
		cout<<endl;
		e--;
	}
}
