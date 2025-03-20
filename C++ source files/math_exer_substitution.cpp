#include <iostream>
using namespace std;
int main ()
{
    cout << "This program solves linear equations in two variables using Substitution.";
    cout << "\nFormat: Ax+By=C";
    cout << "\nEnter 1st Equation\n";
    float a,b,c,d,e,f;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    cout << "Enter 2nd Equation\n";
    cout << "Enter A: ";
    cin >> d;
    cout << "Enter B: ";
    cin >> e;
    cout << "Enter C: ";
    cin >>f;
    float g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    if (a==0&&b==0&&c==0)
    {
                         cout << "\nConsistent And Dependent System.\n";
    }
    if (d==0&&e==0&f==0)
    {
                        cout << "\nConsistent And Dependent System.\n";
                        }
                        
    if (a!=0&&b==0)
    {
                   g=c/a;
                   x=g;
                   h=g;
                   i=g*d;
                   l=-1*i;
                   m=l+f;
                   y=m/e;
                   
                   if (e==0)
                   {
                            z=f/d;
                            y=c/a;
                            if (z==y)
                            {
                                     cout << "\nConsistent and Dependent System.";
                                     }
                                     else
                                     {
                            cout << "\nInconsistent System.\n";
                            }
                            }
                            else 
                            {
    cout << "The solution set is {(";
    cout << x;
    cout << ",";
    cout << y;
    cout << ")}.\n";
}
                   }
                   
    if (a!=0&&b!=0)
    {
    g=-1*b;
    h=g/a;
    i=c/a;
    j=h*d;
    k=i*d;
    l=j+e;
    m=-1*k;
    n=m+f;
    o=n/l;
    y=o;
    p=o*g;
    q=p+c;
    x=q/a;
    if (l==n&&l==0&&n==0)
    {
                         cout << "\nConsistent And Dependent System.\n";
    }
    else if (l==0&&l!=n)
    {
         cout << "\nInconsistent System.\n";
   }
   else
   {
    cout << "The solution set is {(";
    cout << x;
    cout << ",";
    cout << y;
    cout << ")}.\n";
   }
  }
else if (a==0&&b!=0
)
{
     g=c/b;
     y=g;
     g=g*e;
     g=-1*g;
     g=g+f;
     g=g/d;
     if (d==0)
     {
              z=f/e;
              y=c/b;
              if (z==y)
              {
                       cout << "\nConsistent And Dependent System.\n";
              }
                       else
                       {
              cout << "\n Inconsistent System.\n";
              }
              }
              else
              {
     x=g;
      cout << "The solution set is {(";
    cout << x;
    cout << ",";
    cout << y;
    cout << ")}.\n";
}
}
     
system ("pause");
}
    
