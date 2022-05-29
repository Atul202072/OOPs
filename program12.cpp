# include<iostream>
using namespace std;

class university
{   protected:
    int x,y;
    public:
    void bus_service(int id,int time)
    {
     x=id;
     y=time;
     cout<<"Availed"<<endl;
    }
    
};
class department: public university
{   protected:
    int x;
    string y;
    public:
    department(int a, string b)
    {
        x=a;
        y=b;
        cout<<"teachers: ";
    }
    
};
class students: public university
{   protected:
    int x;
    string y;
    public:
    students(int a, string b)
    {
        x=a;
        y=b;
        cout<<"students: ";
    }
    
};

int main()
{
    department D1(100,"abc");
    D1.bus_service(200,10);
    students S1(500,"aa");
    S1.bus_service(300,20);
    return 0;
}

