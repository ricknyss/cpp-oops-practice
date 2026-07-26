#include <iostream>
#include"bird.h"
using namespace std;
void bird_role(Bird *&bird){
  bird->eat();
  bird->fly();

}
int main() {
    Bird *bird = new sparrow();
    bird_role(bird);
    return 0;
}