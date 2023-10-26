#include <iostream>
using namespace std;

// Virtual base class
class Shape {
public:
    virtual void display() = 0; // Pure virtual function
};

// Derived class 1
class Circle : public virtual Shape {
public:
    void display() override {
        cout << "This is a Circle." << endl;
    }
};

// Derived class 2
class Square : public virtual Shape {
public:
    void display() override {
        cout << "This is a Square." << endl;
    }
};

// Derived class 3
class Cube : public Circle, public Square {
public:
    void display() override {
        cout << "This is a Cube." << endl;
    }
};

int main() {
    Cube cube;
    cube.display();
    return 0;
}
