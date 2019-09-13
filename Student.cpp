#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
private:
    string name;
    long id;
    double math, english, physics, chemistry;
public:
    Student(string n, long i)
    {
        name= n;
        id= i;
    }
    void setmath(double value)
    {
        if(value>0 && value<=100)
            math= value;
    }
    void setenglish (double value)
    {
        if(value> 0 && value<= 100)
            english= value;
    }
    void setphysics (double value)
    {
        if(value> 0 && value<= 100)
            physics= value;
    }
    void setchemistry (double value)
    {
        if(value> 0 && value<= 100)
            chemistry= value;
    }
    double getAverage()
    {
        double result;
        //add your code here
        result = (math + english + physics + chemistry)/4;
        return result;
    }
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "id= " << id << endl;
        cout << "Average= " << getAverage() << endl;
    }
};


int main()
{
    Student std("Phan Anh Quan",123123);
    std.setchemistry(88);
    std.setenglish(90);
    std.setphysics(91);
    std.setmath(100);
    std.displayDetails();
}
