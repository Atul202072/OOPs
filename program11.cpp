#include<iostream>
using namespace std;

class Test
{
    int x;
    public:
        Test()                              //constructor
        {
            cout<<"Object is created............"<<endl<<endl;
        }
        ~Test()                             //destructor
        {
            cout<<"Object is destroyed.........."<<endl<<endl;
        }
};

int main()
{
    Test p1;                               //creating object of data type
    return 0;
}