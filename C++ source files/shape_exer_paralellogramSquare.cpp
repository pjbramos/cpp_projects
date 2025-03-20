#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,f;
	cout<<"Enter the value of the square's side: ";
	cin>>a;
	d=a;
	for (b=0; b<a; b++)
	{
		for (f=0; f<d; f++)
		{
			cout<<" ";
		}
		for (c=0; c<a; c++)
		{
			cout<<"*  ";
		}
	    cout<<endl;
	    d--;
	}
	cout<<endl;
}
