#include <iostream>
#include <cmath>
using namespace std;

//*********************************************************************
//  Declaration of the class 'Point'
//*********************************************************************

// class Point represents a two-dimensional point
class Point
{   
    public:
        //Default Constructor (with no arguments).
        Point(); 

        //Constructor, that sets the coordinates (x, y) to the values (xval, yval).
        Point(int xval, int yval);

        //Moves a point by (dx, dy).
        void Move(int dx, int dy);

        //"Gets" values of (x, y).
        int Get_X() const;
        int Get_Y() const;

        //"Sets" (x, y) to (xval, yval).
        void Set_X(int xval);
        void Set_Y(int yval);

        //Lab 7 exercise 4.1. Add declaration of member function Print here:
        //Prints out a point. e.g. (2, 5)
        void print();

    // private data members x, y represent coordinates of the point:
    private:
        int X;
        int Y;
};

//*********************************************************************
//  Methods for class Point
//*********************************************************************

//Class Constructor sets (X, Y) to (0, 0), when no values are specified.
Point::Point()
{
    X = 0;
    Y = 0;
}

//Class Constructor sets (X, Y) to provided values (xval, yval).
Point::Point(int xval, int yval)
{
    X = xval;
    Y = yval;
}

//Increases the 'x-coordinate' by 'dx' and the 'y-coordinate' by 'dy'.
void Point::Move(int dx, int dy)
{
    X += dx;
    Y += dy;
}

//Returns the value of the 'x-coordinate'
int Point::Get_X() const
{
    return X;
}

//Returns the value of the 'y-coordinate'
int Point::Get_Y() const
{
    return Y;
}

//Sets the value of 'x-coordinate' to 'xval'
void Point::Set_X(int xval)
{
    X = xval;
}

//Sets the value of 'y-coordinate' to 'yval'
void Point::Set_Y(int yval)
{
    Y = yval;
}
   

//QUESTION 4 - PART 1
void Point::print() {
    std::cout << "Coordinates: (" << X << ", " << Y << ")" << std::endl;
}

//-------------------------------------------------------------------------------

//QUESTION 4 - PART 2
//'Rectangle' class
class Rectangle {
    private:
        Point p1;
        Point p2;
        Point p3;
        Point p4;
        double side1();
        double side2();
    
    public:
        double s1;
        double s2;
        Rectangle();
        Rectangle(Point pt1, Point pt3); //Diagonally opposite, hence... "pt3"
        void print();
        double area();  
};
// ********************************************************************
//  Constructors & Method(s) for the class 'Rectangle'
// ********************************************************************

//QUESTION 4 - PART 2
Rectangle::Rectangle() {
    p1.Set_X(0);
    p1.Set_Y(0);

    p2.Set_X(1);
    p2.Set_Y(0);

    p3.Set_X(1);
    p3.Set_Y(1);

    p4.Set_X(0);
    p4.Set_Y(1);
}

Rectangle::Rectangle(Point pt1, Point pt3) { //Diagonally opposite, hence... "pt3"
    //Going clockwise A -> B -> C -> D
    p1 = pt1;

    p2.Set_X(pt1.Get_X());
    p2.Set_Y(pt3.Get_Y());

    p3 = pt3;

    p4.Set_X(pt3.Get_X());
    p4.Set_Y(pt1.Get_Y());
}


void Rectangle::print() {
    p1.print();
    p2.print();
    p3.print();
    p4.print();
}

//QUESTION 4 - PART 3
double Rectangle::side1() {
    s1 = sqrt(pow((p1.Get_X() - p2.Get_X()), 2) + pow((p1.Get_Y() - p2.Get_Y()), 2));
    return s1;
}

double Rectangle::side2() {
    s2 = sqrt(pow((p2.Get_X() - p3.Get_X()), 2) + pow((p2.Get_Y() - p3.Get_Y()), 2));
    return s2;
}

double Rectangle::area() {
    return side1()*side2();
}
// ********************************************************************

//Test of added functionality
int main(void)
{
    //QUESTION 4 - PART 1
    Point p(2, 3);
    p.print();

    //Declaring a point using default class constructor (x = y = 0):
    Point p1;
    cout<< "The x-value for 'p1' is: " << p1.Get_X() << endl;
    cout<< "The y-value for 'p1' is: " << p1.Get_Y() << endl;

    //Declaring a point with coordinates X = 2, Y = 3:
    Point p2(2, 3);
    cout<< "\nThe x-value for 'p2' is: " << p2.Get_X() << endl;
    cout<< "The y-value for 'p2' is: " << p2.Get_Y() << endl;

    //Moving the point 'p2', by (1, -1):
    p2.Move(1, -1);
    cout<< "\nAfter moving:" << endl;
    cout<< "The x-value for 'p2' is: " << p2.Get_X() << endl;
    cout<< "The y-value for 'p2' is: " << p2.Get_Y() << endl << endl;

    //QUESTION 4 - PART 2
    Rectangle rect1;
    cout << "\nCo-ordinates of the vertices of Rectangle-1 (in order): \n";
    rect1.print();

    cout << endl;

    Rectangle rect2(p1, p2);
    cout << "\nCo-ordinates of the vertices of Rectangle-2 (in order): \n";
    rect2.print();

    cout << endl;

    //QUESTION 4 - PART 3
    cout << "Area of Rectangle-1: " << rect1.area() << endl;
    cout << "Area of Rectangle-2: " << rect2.area() << endl;
    cout << "Length of side-1 of Rectangle-1: " << rect1.s1 << endl;
    cout << "Length of side-2 of Rectangle-1: " << rect1.s2 << endl;
    cout << "Length of side-1 of Rectangle-2: " << rect2.s1 << endl;
    cout << "Length of side-2 of Rectangle-2: " << rect2.s2 << endl;
    
    return 0;
}
