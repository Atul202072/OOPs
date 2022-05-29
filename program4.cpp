# include <iostream>
#include<math.h>
using namespace std;

class Power                         //creating the class
{
    public:
    double power(double m,int n)       //defining member function
    {
    int i, ans=1;                      
       for(i=1;i<=n;i++)              //using for loop
       {
           ans=ans*m;
       }
        return ans;
    }
    double power(double m)             //function overloading
    {
        int n=2;
        double a;
        a=pow(m,n);                    //using math library function pow()
        return a;
    }
};

    int main()
    { 
    int result=0;
    int base,power;
    Power pow;                             //creating object of Power class
    cin>>base;
    cin>>power;
    result=pow.power(base,power);
    cout<<"The result of "<<base<<'^'<<power<<" is: "<<result;
    return 0;   
    }
