#include <iostream>
using namespace std;

class Time                          //defining time class
{
private:
    int minute;
    int hour;

public:
    Time(){};                                // Default constructor
    Time(int hr, int min)                    //parametrised constructor
    {
        hour = hr;
        minute = min;
    }
    void get_Time(int hr, int min)            //function definition
    {
        hour = hr;
        minute = min;
    };
    void display()                               //display function
    {
        cout << "The hours are : " << hour << endl;
        cout << "The minutes are : " << minute << endl;
    };

    friend Time sum_of_time(Time t1, Time t2)    //using friend function
    {
        Time res;
        res.minute = t1.minute + t2.minute;
        res.hour = res.minute / 60;
        res.minute = res.minute % 60;
        res.hour = res.hour + t1.hour + t2.hour;
        return res;
    };
};

int main()
{
    Time t1, t2, t3;                          //creating object of time data-type
    t1.get_Time(5, 15);                       //function call
    t2.get_Time(6, 42);
    t1.display();
    t2.display();
    t3 = sum_of_time(t1, t2);
    cout << "-------The time after sum------ " << endl;
    t3.display();
    return 0;
}
