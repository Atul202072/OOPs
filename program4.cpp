# include <iostream>
#include<math.h>
using namespace std;

class Power
{
    public:
    double power(double m,int n)
    {
    int i, ans=1;
       for(i=1;i<=n;i++)
       {
           ans=ans*m;
       }
        return ans;
    }
    double power(double m)
    {
        int n=2;
        double a;
        a=pow(m,n);
        return a;
    }
};

    int main()
    { 
    int result=0;
    int base,power;
    Power pow;
    cin>>base;
    cin>>power;
    result=pow.power(base,power);
    cout<<"The result of "<<base<<'^'<<power<<" is: "<<result;
    return 0;   
    }
