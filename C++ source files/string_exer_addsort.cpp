#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

int choice ()
{
    int a;
    cout<<"[1] Add a word\n";
    cout<<"[2] Add multiple words\n";
    cout<<"[3] Output all words\n";
    cout<<"[4] Replace a word\n";
    cout<<"[5] Delete a word\n";
    cout<<"[6] Delete all\n";
    cout<<"[7] Sort Ascending\n";
    cout<<"[8] Sort Descending\n";
    cout<<"[0] Exit\n";
    cout<<"\nEnter choice: ";
    cin>>a;
    return a;
}

vector<string> add (vector<string> a)
{
    string b;
    cout<<"\nEnter a word: ";
    cin>>b;
    a.push_back(b);
    cout<<"Input done.";
    return a;
}

vector<string> multiple (vector<string> a)
{
    char b;
    string c;
    do
    {
        cout<<"\n[1] Input";
        cout<<"\n[2] Stop";
        b=getch();
        if (b=='1')
        {
             cout<<"\nEnter a word: ";
             cin>>c;
             a.push_back(c);
             cout<<"Input done.";
        }
        else if (b=='2') cout<<"\nDone.\n";
    } while (b!='2');
    return a;
}

void output (vector<string> a)
{
    int b;
    if (a.size()==0) cout<<"\nThere are no words to output.";
    else
    {
        cout<<"\nYour words are:";
        for (b=0; b<a.size(); b++)
        {
            cout<<endl<<"("<<b<<") "<<a[b];
        }
        cout<<endl;
    }
}

vector<string> replace (vector<string> a)
{
    int b;
    char d;
    string c;
    if (a.size()==0) cout<<"\nThere are no words to replace.";
    else
    {
        repeat:
        output(a);
        cout<<"\nEnter index: ";
        cin>>b;
        cout<<"Enter word replacement: ";
        cin>>c;
        cout<<"Are you sure you would like the word \""<<a[b]<<"\" to be replaced?";
        cout<<"\n[1] Yes";
        cout<<"\n[2] No";
        cout<<"\n[3] Cancel\n";
        d=getch();
        if (d=='1')
        {
            a[b]=c;
            cout<<"\nReplacing done.";
        }
        else if (d=='2') goto repeat;
        else if (d=='3') cout<<"\nGET REKT.";
    }
    return a;
}

vector<string> del (vector<string> a)
{
    int b;
    char c;
    if (a.size()==0) cout<<"\nThere are no words to delete.";
    else
    {
        output(a);
        something:
        cout<<"\nEnter index: ";
        cin>>b;
        cout<<"\nAre you sure you would delete the word \""<<a[b]<<"\" ?";
        cout<<"\n[1] Yes";
        cout<<"\n[2] No";
        cout<<"\n[3] Cancel\n";
        c=getch();
        if (c=='1')
        {
           a.erase(a.begin()+b);
           cout<<"\nDeleting done.";
        }
        else if (c=='2') goto something;
        else if (c=='3') cout<<"\nGET REKT.";
    }
    return a;
}

vector<string> all (vector<string> a)
{
    int b,c;
    cout<<"\nAre you sure?";
    cout<<"\n[1] Yes";
    cout<<"\n[2] No";
    cout<<"\nEnter choice: ";
    cin>>b;
    if (b==1)
    {
         a.clear();
         cout<<"\nDeleting done.";
    }
    else if (b==2) cout<<"\nGET REKT.";
    return a;
}

vector<string> sortass (vector<string> a)
{
    int b,c;
    string d;
    if (a.size()==0) cout<<"\nThere are no words to sort.";
    else
    {
        for (b=a.size()-1; b>=0; b--)
        {
            if (b!=0)
            {
                 for (c=1; c<=b; c++)
                 {
                     if (a[b]<=a[b-c])
                     {
                            d=a[b];
                            a[b]=a[b-c];
                            a[b-c]=d;
                     }
                 }
            }
        }
        cout<<"\nAscending Sort Done.";
    }
    return a;
}

vector<string> sortdesu (vector<string> a)
{
    int b,c;
    string d;
    if (a.size()==0) cout<<"\nThere are no words to sort.";
    else
    {
        for (b=a.size()-1; b>=0; b--)
        {
            if (b!=0)
            {
                 for (c=1; c<=b; c++)
                 {
                    if (a[b]>=a[b-c])
                    {
                          d=a[b-c];
                          a[b-c]=a[b];
                          a[b]=d;
                    }
                 }
            }
        }
        cout<<"\nDescending Sort Done.";
    }
    return a;
}

void out ()
{
     cout<<"\nGET REKT.";
}

int main ()
{
    int a;
    vector<string> b,c;
    do
    {
        a=choice();
        c=b;
        if (a==1) b=add(c);
        else if (a==2) b=multiple(c);
        else if (a==3) output(b);
        else if (a==4) b=replace(c);
        else if (a==5) b=del(c);
        else if (a==6) b=all(c);
        else if (a==7) b=sortass(c);
        else if (a==8) b=sortdesu(c);
        else if (a==0) out();
        cout<<endl<<endl;
        system ("pause");
        system ("cls");
    } while (a!=0);
}
