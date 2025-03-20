#include <iostream>
using namespace std;

int menu ()
{
	int a;
	cout<<"[1] Input or Change sentence or phrase\n";
    cout<<"[2] Output Sentence or Phrase\n";
    cout<<"[3] Sentence case\n";
    cout<<"[4] lower case\n";
    cout<<"[5] UPPER CASE\n";
    cout<<"[6] Capitalize Each Word\n";
    cout<<"[7] tOOGLE cASE\n";
    cout<<"[0] Exit\n";
    cout<<"\nEnter number of choice: ";
    cin>>a;
    return a;
}

string input ()
{
	string a;
    char b[1000];
    cout<<"\nEnter your sentence or phrase: ";
    cin.ignore ();
    cin.getline (b,1000);
    a=b;
    cout<<"\nInput done.\n\n";
    return a;
}

void output (string a)
{
	int b;
	cout<<"Your sentence/phrase is \"";
	for (b=0; b<a.length(); b++)
	{
		cout<<a[b];
	}
	cout<<"\".\n\n";
}

string sentence (string a)
{
	int b;
	for (b=0; b<a.length(); b++)
	{
		if (b==0 && a[b]>=97 && a[b]<=122) a[b]-=32;
        else if (b!=0 && a[b]>=65 && a[b]<=90)
        {
            a[b]+=32;
        }
    }
    cout<<"Changing done.\n\n";
    return a;
}

string lower (string a)
{
	int b;
	for (b=0; b<a.length(); b++)
	{
		if (a[b]>=65 && a[b]<=90) a[b]+=32;
	}
	cout<<"Changing done.\n\n";
	return a;
}

string upper (string a)
{
	int b;
	for (b=0; b<a.length(); b++)
	{
		if (a[b]>=97 && a[b]<=122) a[b]-=32;
	}
	cout<<"Changing done.\n\n";
	return a;
}

string capitalize (string a)
{
	int b;
	for (b=0; b<a.length(); b++)
	{
		if (a[b]>=65 && a[b]<=90) a[b]+=32;
	}
	for (b=0; b<a.length(); b++)
	{
		if (b==0) a[b]-=32;
		else if (a[b]==32 && a[b+1]>=97 && a[b+1]<=122) a[b+1]-=32;
	}
	cout<<"Changing done.\n\n";
	return a;
}

string toggle (string a)
{
	int b;
	for (b=0; b<a.length(); b++)
	{
		if (a[b]>=97 && a[b]<=122) a[b]-=32;
		else if (a[b]>=65 && a[b]<=90) a[b]+=32;
	}
	cout<<"Changing done.\n\n";
	return a;
}

void something ()
{
	cout<<"Please enter a number from the given set.\n\n";
}

void exit ()
{
	cout<<"You exited.\n\n";
}

int main ()
{
	int a;
	string b,c;
	do
	{
		a=menu();
		if (a==1) b=input();
		else if (a==2) output(b);
		else if (a==3) b=sentence(b);
		else if (a==4) b=lower(b);
		else if (a==5) b=upper(b);
		else if (a==6) b=capitalize(b);
		else if (a==7) b=toggle(b);
		else if (a>7 || a<0) something();
	} while (a!=0);
	exit();
	system ("pause");
}
