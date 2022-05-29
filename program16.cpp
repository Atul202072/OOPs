#include <iostream>
using namespace std;

class square
{  private:
    int side;                       //data member
    int area;                       //data member
   public:
   square(int a)                    //constructor
   {
       side=a;
   }
    void operator--()               //operator overloading
   {
     side=side-1;
   }
   int calc()                       //square calculating function
   {
      area=side*side;
       return area;
   } 
   void display()                   //display function
   {
       cout<<"The square is: "<<area ;
   }
};

int main()
{
    int a;
    cout<<"Enter the side of the square: ";
    cin>>a;
    cout<<"After decrementing --"<<endl;
    square A1=square(a);          //initialisation
    --A1;                         //operator call
    A1.calc();                    //function call
    A1.display();                 //display function call 
    return 0;
}

