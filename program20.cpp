#include <iostream>
#include <fstream>
using namespace std;

class Car
{
    int price;
    char name[25];

public:
    Car(){};
    void get_Data()
    {
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
        cout << "Enter Name:  ";
        cin.getline(name, 25);
    }
    void display()
    {
        cout << "Price: " << price << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    cout << "Enter the number of Cars : ";
    int n;
    cin >>n;

    Car s[n];                   
    fstream file;
    int i;

    file.open("C:\\Users\\aksin\\OneDrive\\Documents\\sem-4 oops\\lab1.txt", ios ::out); // open file for writing
    cout << "Enter Car Details to the File----- " << endl;

    for (i = 0; i < n; i++)
    {
        s[i].get_Data(); 
        file.write((char *)&s[i], sizeof(s[i]));
    }

    file.close();                             // close the file

    file.open("C:\\Users\\aksin\\OneDrive\\Documents\\sem-4 oops\\lab1.txt", ios ::in); // open file for reading
    cout << "Reading Car details from the file----- " << endl;

    for (i = 0; i < n; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));   // read an object from a file
        s[i].display();
    }

    file.close(); // close the file

    return 0;
}