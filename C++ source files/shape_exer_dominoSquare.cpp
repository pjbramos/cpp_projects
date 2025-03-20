# include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"Assignment";
	cout<<"\n\nEnter the length of the side: ";
	cin>>a;
	cout<<"\nThe square would look like this: \n\n";
	d=a-2;
	for(e=0; e<a; e++)
	{
		cout<<"* ";
	}
	cout<<"\n";
	for(c=0; c<d; c++)
	{
		cout<<"* ";
		for(b=0; b<d; b++)
		{
			cout<<"  ";
		}
		cout<<"*";
		cout<<"\n";
	}	
	for(e=0; e<a; e++)
	{
		cout<<"* ";
	}
	cout<<endl;
	for (f=1; f<a; f++)
	{
		for(c=0; c<d; c++)
		{
			cout<<"* ";
			for(b=0; b<d; b++)
			{
				cout<<"  ";
			}
			cout<<"*";
			cout<<"\n";
		}	
		for(e=0; e<a; e++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
    cout<<endl<<endl;
	system("pause");
}
