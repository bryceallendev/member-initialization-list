/*
    multipleField.cpp

    Demo program for member initialization lists
*/

#include <vector>

class A {
public:
    // constructor
    A();

private:
    const int n;
    std::vector<int> data;
};

// constructor
A::A() 
    : n(5), data(10000, ' ')
{}

int main() {

    A a;

    return 0;
}
