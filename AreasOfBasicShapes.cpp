#include <iostream>
#include <limits>
#define PI 3.14
using namespace std;
void initmenu();
void decision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double,double);
double areaTriangle(double,double);
bool isValid(string);
int main()
{
    int choice;
    char c;
    do
    {
     system("cls");
    initmenu();
    do
    {
     cin>>choice;
    } while (!isValid("Enter a Number!"));
    
    decision(choice);
    do
    {
      cout<<"do u want to continue(Y/N)"<<endl;
      cin>> c;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while( c!='y'&& c!='Y' && c!='N' && c!='n');

    }
    while(c=='Y' || c == 'y');
    return 0;
}
void initmenu()
{
    cout<<"Enter Option:"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Square"<<endl;
    cout<<"3.Rectangle"<<endl;
    cout<<"4.Triangle"<<endl;
}
void decision(int choice)
{
    switch(choice)
    {
        double r,a,b,h;
        case 1:
            cout<<"Enter the radius:" << endl; 
           do { cin >> r;} while(!isValid("The Radius is Wrong type again:"));
            areaCircle(r);
            break;
        case 2:
            cout<<"Enter the side of square:" << endl; 
            do { cin >> a ;} while(!isValid("The Side is Wrong type again:"));
            areaSquare(a);
            break;
        case 3:
            cout<<"Enter the length and breadth of rec:" << endl; 
            do { cin >> a>>b;} while(!isValid("The length/breadth is Wrong type again:"));
            areaRectangle(a,b);
            break;
        case 4:
            cout<<"Enter the side and height:" << endl; 
            do { cin >> a>>h;} while(!isValid("The Side/height is Wrong type again:"));
            areaTriangle(a,h);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
    }
}
double areaCircle(double r)
{
    double result = PI*r*r;
    cout<<"the area of the circle of " << r <<" radius ="<< result <<" sqm"<<endl;
    return result;
}
double areaSquare(double a)
{
  double result = a*a;
  cout<<"The area of the square of side "<<a<<" is "<<result<<" sqm"<<endl;
  return result;
}
double areaRectangle(double a,double b)
{
  double result = a*b;
  cout<<"The area of the Rectangle of length "<<a<<" and breadth "<<b<<" is "<<result<<" sqm"<<endl;
  return result;

}
double areaTriangle(double a,double h)
{
  double result = 0.5 *  a * h;
  cout<<"The area of the triangle of base "<<a<<" and height "<<h<<" is "<<result<<" sqm"<<endl;
  return result;
}
bool isValid(string error_msg)
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initmenu();
        cout<< error_msg << endl;
        return false;
    }
    return true;
}
