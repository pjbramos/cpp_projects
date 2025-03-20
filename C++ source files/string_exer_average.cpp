#include <iostream>
using namespace std;

int main ()
{
	int a,c,d,e,f;
	cout<<"Enter total no. of numbers: ";
	cin>>a;
	float b[a];
	float g,h;
	for (f=0; f<a; f++)
	{
		b[f]=0;
	}
	g=0;
	do
	{
		cout<<"\n[1] Input a value\n";
		cout<<"[2] Output all numbers\n";
		cout<<"[3] Reset all numbers\n";
		cout<<"[4] Get sum\n";
		cout<<"[5] Get average\n";
		cout<<"[0] Exit\n";
		cout<<"\n\nEnter number of choice: ";
		cin>>c;
		if (c>5 || c<0)
		{
			cout<<"Please enter a number from the given set.";
		}
		else if (c==1)
		{
			mylabel:
			cout<<"\nEnter index (0-";
			cout<<a-1;
			cout<<"):";
			cin>>d;
			if (d>a-1 || d<0)
			{
				cout<<"Please enter a number from ";
				for (f=0; f<a; f++)
				{
					cout<<f<<" ";
				}
				cout<<".";
				goto mylabel;
			}
			cout<<"Enter value of the index: ";
			cin>>e;
			b[d]=e;
			cout<<"\nInput done.\n";
		}
		else if (c==2)
		{
			cout<<"\nThe numbers are ";
			for (f=0; f<a; f++)
			{
				cout<<b[f]<<" ";
			}
			cout<<"\n";
		}
		else if (c==3)
		{
			for (f=0; f<a; f++)
			{
				b[f]=0;
			}
			cout<<"\nReset done.\n";
		}
		else if (c==4)
		{
			for (f=0; f<a; f++)
			{
				g+=b[f];
			}
			cout<<"\nThe sum of all numbers is "<<g<<".\n";
		}
		else if (c==5)
		{
			h=g/a;
			cout<<"\nThe average of all numbers is "<<h<<".\n";
		}
		else if (c==0)
		{
			cout<<"\nYou exited.";
		}
	} while (c!=0);
}
