#include <iostream>
using namespace std;

class math                                      //creating class named math
{                     
    public:
    int power(int , int);                      //function definition
};

inline int math::power(int m, int n)          //defining inline function 
    {                                  
        int i,ans=1;
        for(i=1;i<=n;i++)                       // claculation using loop
        {                
            ans=ans*m;
        }
        return ans;
    }   
    
int main()
{
    int result=0;
    math p;
    result=p.power(5,3);                        //function call
    cout<<"The result of 5^3 is:"<<result;     //output calling
    return 0;
}
