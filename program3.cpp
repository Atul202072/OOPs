# include <iostream>
using namespace std;

class Power
{
    public:
    int power(double m,int n=2)
    {
        int i, ans=1;
        for(i=1;i<=n;i++)
       {
           ans=ans*m;
       }
        return ans;
    }
};

    int main()
    { 
        int result=0;
        Power pow;
        result=pow.power(2,4);
        cout<<result;
        return 0;   
    }

