//operator overloading


#include <iostream>
using namespace std;


class complexx
{
public:
    int real;
    int img;

    // Default Constructor
    complexx()
    {
        real = img = -1;
    }

    // Parameterized Constructor
    complexx(int r, int i)
    {
        real = r;
        img = i;
    }
complexx operator+(const complexx &B){
complexx temp;
temp.real= this->real+B.real;
temp.img= this->img+B.img;
return temp;
}



    // Member Function
    void print()
    {
        cout << "[" << real << " + i" << img << "]" << endl;
    }
};

int main()
{
    complexx A(2, 2);
    A.print();

    complexx B(2, 3);
    B.print();
    complexx c=A+B;
    c.print();
    return 0;
}