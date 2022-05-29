#include<iostream>
using namespace std;

class String                                       //class decleration
{
    private:                                      //access modifier
        string word;                              //data member variable

    public:
        String(string a="")                   //constructor of single parameter
        {
            word = a;
        }
        string get_string()                        // fucntion to store the value of string
		{
			return word;
		}
        void display()                           // function to display the value of string
        {
            cout<<"The string is : "<<word<<endl;
        }
        String operator+(String s)             // function to add two string using operator overloading
        {
            String result;
            result = word+" "+ s.word;
            return result;
        }
        bool compare(string s)                   //function to compare two string(same or not same)
        {
            if(word.length()==s.length())
            {
                for(int i=0; i<word.length();i++)
                {
                    if(word[i]!=s[i])
                        return false;
                }
                return true;
            }
            return false;
        }
};

int main()
{
    string first_string, second_string;             
    cout<<"Enter the value of First String = ";         //for taking input from user
    cin>>first_string;
    String s1(first_string);                            //initialisation using constructor
    s1.display();                                       //function call
    cout<<"Enter the value of Second String = ";
    cin>>second_string;
    String s2(second_string);
    s2.display();
    cout<<endl<<"Comparing Both Strings: ";             // to comapare the strings
    s1.compare(s2.get_string()) ? cout<<"Same"<<endl : cout<<"Not Same"<<endl;
    cout<<endl<<"After Adding Both Strings: "<<endl;
    String s3 = s1+s2;                                  //function call (using operator overloading)
    s3.display();
    cout<<endl;
    return 0;
}