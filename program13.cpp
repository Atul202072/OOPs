# include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A()
    {
        cout<<" This is first class-A "<<endl;
    }
    int calc(int x, int y)
    {
        a=x;
        b=y;
        int temp=a+b;
        cout<<" Sum of "<<a<<" and "<<b<<" is : "<<temp<<endl;
        return 0;
    }
    
};

class B: public A
{
    public:
    B()
    {
        cout<<" This is second class-B "<<endl;
    }
};

class C : public B
{
    public:
    C()
    {
        cout<<" This is third class-C "<<endl;
    }
};

int main()
{
    class C c1;
    class B b1;
    c1.calc(5,10);
    b1.calc(10,20);
    return 0;
}