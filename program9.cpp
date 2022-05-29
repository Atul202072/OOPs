#include <iostream>
using namespace std;
class Shape
{
protected:
    int side;

public:
    virtual void number_Of_Sides() = 0;
};
class Trapezoid : public Shape
{
public:
    Trapezoid(int side)
    {
        this->side = side;
    };

    void number_Of_Sides()
    {
        cout << "The Number of sides in Trapezoid is : " << side << endl;
    };
};

class Triangle : public Shape
{
public:
    Triangle(int side)
    {
        this->side = side;
    }
    void number_Of_Sides()
    {
        cout << "The Number of sides in Triangle is : " << side << endl;
    };
};
class Hexagon : public Shape
{
public:
    Hexagon(int side)
    {
        this->side = side;
    }
    void number_Of_Sides()
    {
        cout << "The Number of sides in Hexagone is : " << side << endl;
    };
};

int main()
{
    int a,b,c;
    cout<<"Enter the nubmer of sides in Trapezoid: ";
    cin>>a;
    cout<<"Enter the nubmer of sides in Triangle: ";
    cin>>b;
    cout<<"Enter the nubmer of sides in Hexagon: ";
    cin>>c;
    cout<<""<<endl;
    Trapezoid t1(a);
    Triangle t2(b);
    Hexagon t3(c);

    t1.number_Of_Sides();
    t2.number_Of_Sides();
    t3.number_Of_Sides();
    return 0;
}