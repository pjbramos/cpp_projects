#include <iostream>
using namespace std;
int main ()
{
    cout << "This program solves linear equations in two variables using Cramer's rule.\n";
    cout << "Format: Ax+By=C";
    float a,b,c,d,e,f;
    cout << "\nEnter 1st Equation:\n";
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
    cin >> f;
    float r,dx,dy;
    r=(a*e)-(d*b);
    dx=(c*e)-(f*b);
    dy=(a*f)-(d*c);
    if (r==0)
    {
             cout << "Inconsistent System or Consistent and Dependent System.";
    }
    else
    {
    float x,y;
    x=dx/r;
    y=dy/r;
    cout << "The solution set is {(";
    cout << x;
    cout << ",";
    cout << y;
    cout << ")}.\n";
}
}
