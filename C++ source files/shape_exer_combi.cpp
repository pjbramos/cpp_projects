#include <iostream>
using namespace std;

int main ()
{
	int x,y,a,b,c,d,e,f;
	cout<<"Computer Science 2 Project\n\n";
	do
	{
		mylabel:
		cout<<"[1] Square\n[2] Rectangle\n[3] Right Triangle\n[4] Regular Triangle\n[5] Diamond\n[0] Exit\n\nEnter the number of the desired shape: ";
		cin>>x;
		if (x>5 || x<0)
		{
			cout<<"\nPlease enter a number from the given set.\n\n-----------------------------------\n\n";
			goto mylabel;			
		}
		else if (x==1)
		{
			do
			{
				label:
				cout<<"\n[1] Regular Square\n[2] Hollow Square\n[0] Exit\n\nEnter the number of the desired type of square: ";
				cin>>y;
				if (y==1)
				{
					cout<<"\nEnter the value of the square's side: ";
					cin>>a;
					cout<<"\nThe square would look like this: \n\n";
					for (b=0; b<a; b++)
					{
						for (c=0; c<a; c++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
				}
				else if (y==2)
				{
					cout<<"\nEnter the value of the square's side: ";
					cin>>a;
					cout<<"\nThe square would look like this: \n\n";
					for (b=0; b<a; b++)
					{
						if (b==0 || b==a-1)
						{
							for (c=0; c<a; c++)
							{
								cout<<"* ";
							}
						}
						else
						{
							cout<<"* ";
							for (c=0; c<a-2; c++)
							{
								cout<<"  ";
							}
							cout<<"* ";
						}
						cout<<endl;
					}
				}
				else if (y>2 || y<0)
				{
					cout<<"\n\nPlease enter a number from the given set.\n";
					cout<<"\n-------------------------------------------------------------\n\n";
					goto label;
				}
				else
				{
					cout<<"\nYou exitted.\n";
				}
				cout<<"\n-------------------------------------------------------------\n\n";
			}while (y!=0);
		}
		else if (x==2)
		{
			do
			{
				label2:
				cout<<"\n[1] Regular Rectangle\n[2] Hollow Rectangle\n[0] Exit\n\nEnter the number of the desired type of rectangle: ";
				cin>>y;
				if (y==1)
				{
					cout<<"\nEnter the value of the rectangle's width: ";
					cin>>a;
					cout<<"Enter the value of the rectangle's height: ";
					cin>>b;
					cout<<"\nThe rectangle would look like this: \n\n";
					for (c=0; c<b; c++)
					{
						for (d=0; d<a; d++)
						{
							cout<<"* ";
						}
						cout<<endl;
					}
				}
				else if (y==2)
				{
					cout<<"\nEnter the value of the rectangle's width: ";
					cin>>a;
					cout<<"Enter the value of the rectangle's height: ";
					cin>>b;
					cout<<"\nThe rectangle would look like this: \n\n";
					for (c=0; c<b; c++)
					{
						if (c==0 || c==b-1)
						{
							for (d=0; d<a; d++)
							{
								cout<<"* ";
							}
						}
						else
						{
							cout<<"* ";
							for (d=0; d<a-2; d++)
							{
								cout<<"  ";
							}
							cout<<"* ";
						}
						cout<<endl;
					}
				}
				else if (y>2 || y<0)
				{
					cout<<"\n\nPlease enter a number from the given set.\n";
					cout<<"\n-------------------------------------------------------------\n\n";
					goto label2;
				}
				else
				{
					cout<<"\nYou exitted.\n";
				}
				cout<<"\n-------------------------------------------------------------\n\n";
			}while (y!=0);
		}
		else if (x==3)
		{
			do
			{
			label3:
			cout<<"\n[1] Regular Right Triangle\n[2] Hollow Right Triangle\n[0] Exit\n\nEnter the number of the desired type of right triangle: ";
			cin>>y;
			if (y==1)
			{
				cout<<"\nEnter the value of the triangle's height: ";
				cin>>a;
				cout<<"\nThe triangle would look like this: \n\n";
				for (b=0; b<a; b++)
				{
					for (c=0; c<=b; c++)
					{
						cout<<"* ";
					}
					cout<<endl;
				}
			}
			else if (y==2)
			{
				cout<<"\nEnter the value of the triangle's height: ";
				cin>>a;
				cout<<"\nThe triangle would look like this: \n\n";
				for (b=0; b<a; b++)
				{
					if (b==0 || b==a-1)
					{
						for (c=0; c<=b; c++)
						{
							cout<<"* ";
						}
					}
					else
					{
						cout<<"* ";
						for (c=0; c<=b-2; c++)
						{
							cout<<"  ";
						}
						cout<<"* ";
					}
					cout<<endl;
				}
			}
			else if (y>2 || y<0)
			{
				cout<<"\n\nPlease enter a number from the given set.\n";
				cout<<"\n-------------------------------------------------------------\n\n";
				goto label3;
			}
			else
			{
				cout<<"\nYou exitted.\n";
			}
			cout<<"\n-------------------------------------------------------------\n\n";
		}while(y!=0);
		}
		else if (x==4)
		{
			do
			{
			label4:
			cout<<"\n[1] Regular Equilateral Triangle\n[2] Hollow Equilateral Triangle\n[0] Exit\n\nEnter the number of the desired type of equilateral triangle: ";
			cin>>y;
			c=1;
			if (y==1)
			{
				cout<<"\nEnter the value of the triangle's height: ";
				cin>>a;
				cout<<"\nThe triangle would look like this: \n\n";
				b=a-1;
				for (d=0; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					for (f=0; f<c; f++)
					{
						cout<<"* ";
					}
					b--;
					c+=2;
					cout<<endl;
				}
			}
			else if (y==2)
			{
				cout<<"\nEnter the value of the triangle's height: ";
				cin>>a;
				cout<<"\nThe triangle would look like this: \n\n";
				b=a-1;
				for (d=0; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					if (d==0 || d==a-1)
					{
						for (f=0; f<c; f++)
						{
							cout<<"* ";
						}
					}
					else
					{
						cout<<"* ";
						for (f=0; f<c-2; f++)
						{
							cout<<"  ";
						}
						cout<<"* ";
					}
					b--;
					c+=2;
					cout<<endl;
				}
			}
			else if (y>2 || y<0)
			{
				cout<<"\n\nPlease enter a number from the given set.\n";
				cout<<"\n-------------------------------------------------------------\n\n";
				goto label4;
			}
			else
			{
				cout<<"\nYou exitted.\n";
			}
			cout<<"\n-------------------------------------------------------------\n\n";
		}while (y!=0);
		}
		else if (x==5)
		{
			do
			{
			label5:
			cout<<"\n[1] Regular Diamond\n[2] Hollow Diamond\n[0] Exit\n\nEnter the number of the desired type of diamond: ";
			cin>>y;
			c=1;
			if (y==1)
			{
				cout<<"\nEnter the value of the diamond's side: ";
				cin>>a;
				cout<<"\nThe diamond would look like this: \n\n";
				b=a-1;
				for (d=0; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					for (f=0; f<c; f++)
					{
						cout<<"* ";
					}
					b--;
					c+=2;
					cout<<endl;
				}
				b+=2;
				c-=4;
				for (d=1; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					for (f=0; f<c; f++)
					{
						cout<<"* ";
					}
					b++;
					c-=2;
					cout<<endl;	
				}
			}
			else if (y==2)
			{
				cout<<"\nEnter the value of the diamond's side: ";
				cin>>a;
				cout<<"\nThe diamond would look like this: \n\n";
				b=a-1;
				for (d=0; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					if (d==0)
					{
						cout<<"*";
					}
					else
					{
						cout<<"* ";
						for (f=0; f<c-2; f++)
						{
							cout<<"  ";
						}
						cout<<"* ";
					}
					b--;
					c+=2;
					cout<<endl;
				}
				b+=2;
				c-=4;
				for (d=1; d<a; d++)
				{
					for (e=0; e<b; e++)
					{
						cout<<"  ";
					}
					if (d==a-1)
					{
						cout<<"*";
					}
					else
					{
						cout<<"* ";
						for (f=0; f<c-2; f++)
						{
							cout<<"  ";
						}
						cout<<"* ";
					}
					b++;
					c-=2;
					cout<<endl;	
				}
			}
			else if (y>2 || y<0)
			{
				cout<<"\n\nPlease enter a number from the given set.\n";
				cout<<"\n-------------------------------------------------------------\n\n";
				goto label5;
			}
			else
			{
				cout<<"\nYou exitted.\n";
			}
			cout<<"\n-------------------------------------------------------------\n\n";
		}while (y!=0);
		}
		else
		{
			cout<<"\nYou exitted.\n";
		}
	}while (x!=0);
}
