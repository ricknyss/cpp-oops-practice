// Inheritance is way to create a class from existing class
// use inheritance whenever IS-A realtionship is identified btween objects

// syntax
// class BaseClass {
//     // Members of the parent class
// };

// class DerivedClass : accessSpecifier BaseClass {
//     // Members of the child class
// };

#include <iostream>
using namespace std;

class Vehicle // always base class firstly initialize !!
{
public:
    string name;
    string model;
    int noof_tyers;

    Vehicle(string _name, string _model, int _noof_tyres)
    {
        cout << "I am inside the Vehicle constructor" << endl;
        this->name = _name;
        this->model = _model;
        this->noof_tyers = _noof_tyres;
    }

public:
    void start_engine()
    {
        cout << "Enginse is starting " << name << " " << model
             << endl;
    }
    void stop_engine()
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }
    ~Vehicle(){
        cout<<"i am inside the dtr"<<endl;
    }
};

class car : public Vehicle
{
public:
    int noOf_doors;
    string transmission_type;
    car(string _name, string _model, int _noof_tyres, int _noOf_doors, string _transmission_type) : Vehicle(_name, _model, _noof_tyres)
    {
        cout << "Iam inside the car construtor" << endl;
        this->noOf_doors = _noOf_doors;
        this->transmission_type = _transmission_type;
    }
    void start_Ac()
    {
        cout << "AC has started of" << name << endl;
    }

    ~car(){
        cout<<"i am inside the dtr"<<endl;
    }
    };
class motorcycle : public Vehicle
{
public:
    string handle_bar_style;
    string suspensions;

    motorcycle(string _name, string _model, int _noof_tyres, string _handle_bar_style, string _suspensions) : Vehicle(_name,_model,_noof_tyres)

    {
        this->handle_bar_style = _handle_bar_style;
        this->suspensions = _suspensions;
    }
    public:
    void wheleer()
    {
        cout<<"wheeler kar rhi hai"<<name<<endl;
    }
    ~motorcycle(){
        cout<<"i am inside the dtr"<<endl;
    }
};
int main()
{

    // car A("Maruti 800", "Lx1", 4, 4, "Manual");
    // A.start_engine();
    // A.start_Ac();
    // A.stop_engine();

motorcycle M("kawasuki ", "xx231", 23, "modern handle of style ", " suspension " );
M.start_engine();
M.wheleer();
M.start_engine();


}