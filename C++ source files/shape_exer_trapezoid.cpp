#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e,f;
	cout<<"Enter the height: ";
	cin>>a;
	d=a+a;
	f=a+a;
	for (b=0; b<a; b++)
	{
		for (c=0; c<d; c++)
		{
			cout<<"  ";
		}
		for (e=0; e<f; e+=2)
		{
			cout<<"*   ";
		}
		cout<<endl;
		d--;
		f+=2;
	}
	system ("pause");
}
