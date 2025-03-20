#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e;
	cout<<"\n\n\tAlternative week assignment";
	cout<<"\n\n\tEnter the value of the rectangle's width: ";
	cin>>a;
	cout<<"\tEnter the the value of the rectangle's height: ";
	cin>>b;
	cout<<"\n\tThe rectangle would look like this: \n\n";
	if (a>b) e=a;
	else e=b;
	for (c=0; c!=b; c++)
	{
		cout<<"\t\t\t";
        for (d=1; d<=e; d++)
		{
			cout<<" ";
		}
		for (d=0; d!=a; d++)
		{
			cout<<"* ";
		}
	    cout<<endl;
	    e--;
	}
	cout<<endl<<"\t";
	system ("pause");
}
