/*
    intField.cpp

    Demo program for member initialization lists
*/

class A {
public:
    // constructor
    A(int n);

private:
    int n;
};

// constructor
A::A(int n) 
    : n(n)
{}

int main() {

    A a(5);

    return 0;
}
