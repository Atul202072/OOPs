#include<iostream>
using namespace std;

class DB;                      //declaring class DB
class DM                       //defining class DM
{
 float m,cm;            //private data members
 public:
 void get_data()                //defining member function
 {
  cout<<"Enter the distance in meters & centimeters: ";
  cin>>m>>cm;
 }
 void display()                //display member function
 {
  cout<<"The distance is: "<<m<<" meters and "<<cm<<" centimeter";
 }
 friend void add_function(DM &,DB &);    //declaring friend function
};
class DB                       //defining class DB
{
 float in,ft;              //private data members
 public:
 void get_data()               //mamber function declaration
 {
  cout<<"\nEnter the distance in feets & inches:";
  cin>>ft>>in;
 }
 void display()                 //member function to display output
 {
  cout<<"\nThe distance is:"<<ft<<" feet and "<<in<<" inch";
 }
 friend void add_function(DM &,DB &);     //declaring friend function
}; 
void add_function(DM &a,DB &b)             //defining friend function 
{
 int x;
 cout<<"-----For unit in Meters-Centimeters, Enter-1-----"<<endl;
 cout<<"-----For unit in Meters-Centimeters, Enter-2-----"<<endl;
 cout<<"Choose your preference: ";
 cin>>x;
 if(x==1)
 {
  DM temp;
  int c=(a.m*100+a.cm+b.ft*30.48+b.in*2.54);
  if(c>=100)
  {
   temp.m=c/100;
   temp.cm=c%100;
  }
  else
  {
   temp.m=0;
   temp.cm=c;
  }
  temp.display();
 }
 else
 {
  DB temp;
  int i=(a.m*39.37+a.cm*.3937008+b.ft*12+b.in);
  if(i>=12)
  {
   temp.ft=i/12;
   temp.in=i%12;
  }
  else
  {
   temp.ft=0;
   temp.in=i;
  }
  temp.display();
 }
}
int main()
{
 
 DM d1;
 DB d2;
 d1.get_data();
 d2.get_data();
 add_function(d1,d2);
 

}