# include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h;
	cout<<"Assignment";
	cout<<"\n\nEnter the width of the rectangle: ";
	cin>>g;
	cout<<"\nEnter the height of the rectangle: ";
	cin>>a;
	e=a-2;
	d=g-2;
	for(f=0; f<g; f++)
	{
		cout<<"* ";
	}
	cout<<"\n";
	for(c=0; c<e; c++)
	{
		cout<<"* ";
		for(b=0; b<d; b++)
		{
			cout<<"  ";
		}
		cout<<"*";
		cout<<"\n";
	}	
	for(f=0; f<g; f++)
	{
		cout<<"* ";
	}
	cout<<endl;
	for (h=1; h<a; h++)
	{
		for(c=0; c<e; c++)
		{
			cout<<"* ";
			for(b=0; b<d; b++)
			{
				cout<<"  ";
			}
			cout<<"*";
			cout<<"\n";
		}
		for(f=0; f<g; f++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	system("pause");
}
