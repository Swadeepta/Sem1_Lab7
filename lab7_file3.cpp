
#include <iostream>
using namespace std;

class Rectangle
{
  public:
  double length;
  double breadth;
  double ar;
  double per;
  double perimeter(double len, double bre);    //to return the perimeter of the rectangle 
  double area(double len, double bre);          //to return the area of the rectangle 
};

double Rectangle::perimeter(double l,double b)
{ 
  return l+b;
}
double Rectangle::area(double l,double b)
{
  return l*b;
}

int main()
{
   
   Rectangle RL1, RL2;
   cout<<"IMPLEMENTING CLASS CONCEPTS CPP3.cpp";
   cout<<"\n \nPROGRAM TO FIND AREA AND PERIMETER OF A TRIANGLE AND COMPARE IT WITH ANOTHER";
   cout<<"\n \nEnter the length of FIRST rectangle: ";
   cin>>RL1.length;
   cout<<"\n \nEnter the breadth of FIRST rectangle: ";
   cin>>RL1.breadth;
   cout<<"\n \nEnter the length of SECOND rectangle: ";
   cin>>RL2.length;
   cout<<"\n \nEnter the breadth of SECOND rectangle: ";
   cin>>RL2.breadth;
   RL1.ar=RL1.area(RL1.length,RL1.breadth);
   RL1.per=RL1.perimeter(RL1.length,RL1.breadth);
   RL2.ar=RL2.area(RL2.length,RL2.breadth);
   RL2.per=RL2.perimeter(RL2.length,RL2.breadth);
   if(RL1.ar>RL2.ar)
   { 
     cout<<"\nArea of Rectangle 1 is greater than Rectangle 2";
   }
   else if(RL1.ar<RL2.ar)
   { 
     cout<<"\nArea of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nArea of Rectangle 1 and Rectangle 2 are equal";
   }
   if(RL1.per>RL2.per)
   { 
     cout<<"\nPerimeter of Rectangle 1 is greater than Rectangle 2";
   }
   else if(RL1.per<RL2.per)
   { 
     cout<<"\nPerimeter of Rectangle 2 is greater than Rectangle 1";
   }
   else
   {
     cout<<"\nPerimeter of Rectangle 1 and Rectangle 2 are equal";
   }
   return 0;
}
