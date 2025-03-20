#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"Enter the height: ";
	cin>>a;
	d=a;
	for(b=0; b<a; b++)
	{
        for(c=0; c<d; c++)
		{
           cout <<"* ";
        }
        d--;
	    cout<<endl;
	}
}

