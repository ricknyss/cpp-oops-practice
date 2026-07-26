#ifndef BIRD_H
#define BIRD_H

#include <iostream>

// Your abstract base class
class Bird {
public:
    virtual void fly() = 0; // Pure virtual function for abstraction
    virtual void eat() = 0; // Pure virtual function for abstraction
    virtual ~Bird() = default;
};

// A concrete implementation so you have something to run
class Eagle : public Bird {
public:
    void fly() override {
        std::cout << "The eagle soars high!" << std::endl;
    }
    void eat() override {
        std::cout << "The eagle eats fish." << std::endl;
    }
}; // <-- Added missing closing brace here

class sparrow : public Bird {
public:
    void fly() override {
        std::cout << "The sparrow flies low and fast!" << std::endl;
    }
    void eat() override {
        std::cout << "The sparrow eats seeds." << std::endl;
    }
    
};
class eagle : public Bird {
public:
    void fly() override {
        std::cout << "The eagle flies low and fast!" << std::endl;
    }
    void eat() override {
        std::cout << "The eagle eats seeds." << std::endl;
    }
};
#endif // BIRD_H