#include <iostream>
using namespace std;

int main ()
{
    int a,c,d,e,f,g,h;
    cout<<"Enter N: ";
    cin>>a;
    int b[a];
    for (f=0; f<a; f++)
	{
		b[f]=0;
	}
    do
    {
        cout<<"\n[1] Input Single Item Number\n";
        cout<<"[2] Input All Item Numbers\n";
		cout<<"[3] Output All Items\n";
		cout<<"[4] Reset All Items to 0\n";
		cout<<"[5] Sort to Ascending Order\n";
		cout<<"[6] sort to Descending Order\n";
		cout<<"[0] Exit\n";
		cout<<"\n\nEnter number of choice: ";
		cin>>c;
		if (c==1)
		{
            cout<<"\nEnter index: ";
			cin>>d;
			cout<<"Enter value of the index: ";
			cin>>e;
			b[d]=e;
			cout<<"\nInput done.\n";
		}
		else if (c==2)
		{
             cout<<endl;
             for (f=0; f<a; f++)
             {
                 cout<<"Enter number for index "<<f<<": ";
                 cin>>b[f];
             }
             cout<<"\nInput done.\n";
        }
        else if (c==3)
        {
			for (f=0; f<a; f++)
			{
				cout<<b[f]<<" ";
			}
        }
        else if (c==4)
        {
            for (f=0; f<a; f++)
			{
				b[f]=0;
			}
			cout<<"\nReset done.\n";
        }
        else if (c==5)
        {
             for (f=a-1; f>=0; f--)
             {
                 if (f!=0)
                 {
                      for (g=1; g<=f; g++)
                      {
                          if (b[f]<=b[f-g])
                          {
                               h=b[f];
                               b[f]=b[f-g];
                               b[f-g]=h;
                          }
                      }
                 }
             }
             cout<<"\nAscending Sort Done.\n";
        }
        else if (c==6)
        {
             for (f=a-1; f>=0; f--)
             {
                 if (f!=0)
                 {
                      for (g=1; g<=f; g++)
                      {
                          if (b[f]>=b[f-g])
                          {
                               h=b[f-g];
                               b[f-g]=b[f];
                               b[f]=h;
                          }
                      }
                 }
             }
             cout<<"\nDescending Sort Done.\n";
        }
        else if (c==0)
        {
             cout<<"\nYou exitted.\n\n";
        }
    } while (c!=0);
    system ("pause");
}
