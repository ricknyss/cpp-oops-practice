// encapsulaion binds data and method in a class
//like a capsule ,it combine and binds them together


//function 1. provide a secure layer 
//2. hides internal implementation of code and data in class
//3. expose only necessary info to the external waorld 


//##Acess modifier 
//1. public 2. private 3. protected
#include <iostream>
using namespace std;

class student
{
public:
    int age;
    int id;
    string name;
    int nos;

private:
    int gfs;

public:
    student(int id, int age, string name, int nos, int gfs)
    {
        cout << "Student parameterized constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gfs = gfs;
    }

    void study()
    {
        cout << name << " studying" << endl;
    }

    void sleep()
    {
        cout << name << " sleeping" << endl;
    }

    void bunk()
    {
        cout << name << " bunking" << endl;
    }

    ~student()
    {
        cout << "Student destructor called" << endl;
    }

private:
    void gfchatting()
    {
        cout << "mt kr lala" << endl;
    }
};

int main()
{
    student A(3, 20, "Janu", 45, 76);

    A.study();
   

    return 0;
}