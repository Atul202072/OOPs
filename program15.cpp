#include <iostream>
using namespace std;

class Games                        // defining class
{
   public:
   Games()                         //constructor
   {
      cout << " This is First Class- Games "<<endl;
   }
};

class Cricket                      //container class
{
   Games game1;                    //object of first class defined in container class
   public:
   Cricket()                       //constructor
   {
      cout << " This is Container Class- Cricket "<<endl;
   }
};
int main()
{
   Cricket c1;                     //creating object of container class
   return 0;
}
