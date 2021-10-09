/*
    constvectorrefField.cpp

    Demo program for member initialization lists
*/

#include <vector>

class A {
public:
    // constructor
    A(const std::vector<int>& data);

private:
    const std::vector<int>& data;
};

// constructor
A::A(const std::vector<int>& data) 
    : data(data)
{}

int main() {

    std::vector<int> mydata;

    A a(mydata);

    return 0;
}
