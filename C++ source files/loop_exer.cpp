#include <iostream>
using namespace std;

int main ()
{
    int a,c;
    cout<<"\n\tHow many fruits? ";
    cin>>a;
    string b[a];
    if (a!=0)
    {
        if (a==1)
        {
                cout<<"\n\tWhat IS your fruit?\n\n";
        }
        else if (a>1)
        {
                cout<<"\n\tWhat ARE your fruits?\n\n";
        }
        for (c=1; c<=a; c++)
        {
             cout<<"\tFruit#"<<c<<": ";
             cin>>b[c-1];
        }
        if (a==1)
        {
                 cout<<"\n\tYour fruit is "<<b[a-1]<<".\n";
        }
        else if (a!=1)
        {
             cout<<"\n\tYour fruits are ";
             for (c=0; c<=a-2; c++)
             {
             	if (a==2)
             	{
             		cout<<b[c]<<" ";
             		goto label1;
				}
                cout<<b[c]<<", ";
             }
             label1:
             cout<<"and "<<b[a-1]<<".\n";
        }
    }
    else if (a==0)
    {
         cout<<"\n\tYou have no fruits. lolzor\n";
    }
    cout<<"\n\t";
    system ("pause");
}
    
