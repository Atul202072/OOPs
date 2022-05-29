#include <iostream>
using namespace std;

class Cars
{
public:
    Cars()
    {
        cout << "This is the base class- Cars " << endl;
    }
};
class Supercars : public Cars
{
public:
    Supercars()
    {
        cout << "This is derived class- Supercars " << endl;
    }
};
class RacingCars
{
public:
    RacingCars()
    {
        cout << "This is derived class- Racingcars "<<endl;
    }
};
class F1Cars : public Supercars, RacingCars
{
public:
    F1Cars()
    {
        cout << "This is derived class- F1Cars "<<endl;
    }
};
int main()
{
    F1Cars F1;
    return 0;
}