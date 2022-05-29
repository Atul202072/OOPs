#include <iostream>
using namespace std;

class Test1
{
   public:
   virtual void fun1()
   {
       cout<<"This is virtual function in base class"<<endl;
   }
};
class Test2: public Test1
{
    public:
    void fun1()
    {
        cout<<"\nThis is function over-riding."<<endl;
    }
    void fun2()
    {
        cout<<"This is second function in derived class"<<endl;
    }
};

int main()
{
   Test1 *p,t1;
   Test2 t2;
   p= &t2;
   p->fun1();
    return 0;
}