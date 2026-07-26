#include <iostream>
using namespace std;

//====================== Base Class ======================

class Person
{
protected:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "Name : " << name << endl;
    }
};

//========================================================
//               1. Single Inheritance
//========================================================

class Student : public Person
{
public:
    Student(string n) : Person(n) {}

    void study()
    {
        cout << name << " is studying." << endl;
    }
};

//========================================================
//              2. Multilevel Inheritance
//========================================================

class CollegeStudent : public Student
{
public:
    CollegeStudent(string n) : Student(n) {}

    void attendCollege()
    {
        cout << name << " is attending college." << endl;
    }
};

//========================================================
//             3. Hierarchical Inheritance
//========================================================

class Teacher : public Person
{
public:
    Teacher(string n) : Person(n) {}

    void teach()
    {
        cout << name << " is teaching." << endl;
    }
};

//========================================================
//             4. Multiple Inheritance
//========================================================

class Singer
{
public:
    void sing()
    {
        cout << "Can Sing." << endl;
    }
};

class Dancer
{
public:
    void dance()
    {
        cout << "Can Dance." << endl;
    }
};

class Performer : public Singer, public Dancer
{
public:
    void perform()
    {
        cout << "Performing on stage." << endl;
    }
};

//========================================================
//            5. Hybrid Inheritance
//========================================================

class SportsPerson : public Student, public Singer
{
public:
    SportsPerson(string n) : Student(n) {}

    void play()
    {
        cout << name << " is playing sports." << endl;
    }
};

//=========================== MAIN =========================

int main()
{
    cout << "----- Single Inheritance -----\n";
    Student s("Hariom");
    s.displayName();
    s.study();

    cout << "\n----- Multilevel Inheritance -----\n";
    CollegeStudent cs("Rahul");
    cs.displayName();
    cs.study();
    cs.attendCollege();

    cout << "\n----- Hierarchical Inheritance -----\n";
    Teacher t("Amit");
    t.displayName();
    t.teach();

    cout << "\n----- Multiple Inheritance -----\n";
    Performer p;
    p.sing();
    p.dance();
    p.perform();

    cout << "\n----- Hybrid Inheritance -----\n";
    SportsPerson sp("Rohit");
    sp.displayName();
    sp.study();
    sp.sing();
    sp.play();

    return 0;
}

//                  Person
//                    |
//           -------------------
//           |                 |
//        Student          Teacher
//           |
//     CollegeStudent
//           |
//     SportsPerson -------- Singer


// Singer + Dancer
//        |
//    Performer