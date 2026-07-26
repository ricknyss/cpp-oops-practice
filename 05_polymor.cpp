// funtion overloading

#include <iostream>
using namespace std;
class add
{
public:
    int sum(int c, int y)
    {
        cout << "the sum of two int" << endl;
        return c + y;
    }
    int sum(int c, int y, int z)
    {
        cout << "the sum of three int" << endl;
        return c + z + y;
    }
};
int main()
{
    int c = 45;
    int y = 56;
    int z = 67;
    add add;
    cout<<add.sum(c,y)<<endl;
    cout<<add.sum(c,y,z)<<endl;
    return 0;
} 