#include <iostream>
using namespace std;


    class student
    {
        public:
        //attributes
        int age;
        int id ;
        string name ;
        int nos;

        // contructor: default construot we use parametrize constructor
        
        student(int id , int age , string name , int nos){
            cout<<"studnet parametrize constructor caller"<<endl;
            this->age=age;
            this->id= id;
            this->name=name;
            this->nos;
        }
        //behaviour /methods/ functions
        void study ()
        {
            cout <<this->name<<"studing"<<endl;

        }
        void sleep()
        {
            cout<<this->name<<"sleeping"<<endl;
        }
        void bunk(){
            cout<<this->name <<"bunking"<<endl;
        }
        ~student(){
            cout<<"student defalut deconstructor "<<endl;

        }

    };
    int main(){
student A(1,34, "raj54u" ,5);
student b(1,346, "ra454ju" ,6);
student c(1,3454, "r45aju" ,5e6);
student d(1,3664, "raju" ,5456);
cout<<A.name<<" "<<A.age<<endl;
    return 0;
    }