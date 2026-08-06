#include <iostream>
using namespace std;
// class creation

class student{
    public:
    //properties/data member
    int age ;
    int weight;
    int height;
    string name;

    //behaviour /member functions
    void running ()
    {
        cout<<"I am running"<<endl;
    }
    void studying(){
        cout<<name <<"is studying"<<endl;
    }
};
int main() {
    
    return 0;
}
