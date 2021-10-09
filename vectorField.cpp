/*
    vectorField.cpp

    Demo program for member initialization lists
*/

#include <vector>

class A {
public:
    // constructor
    A();

private:
    std::vector<int> data;
};

// constructor
A::A() 
    : data(10000,0)
{}

int main() {

    A a;

    return 0;
}
