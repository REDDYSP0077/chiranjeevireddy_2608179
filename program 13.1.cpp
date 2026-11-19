
#include <iostream>
#include <memory>
#include <string>
using namespace std;

// Abstract base class
struct Shape {
    virtual double area() const = 0;

    virtual ~Shape() {}
};

// Derived class Circle
struct Circle : Shape {
    double r;

    Circle(double r) : r(r) {}

    double area() const override {
        return 3.14159 * r * r;
    }
};

// Derived class Square
struct Square : Shape {
    double s;

    Square(double s) : s(s) {}

    double area() const override {
        return s * s;
    }
};

// Factory function
unique_ptr<Shape> makeShape(const string &kind) {
    if (kind == "circle")
        return make_unique<Circle>(2.0);

    return make_unique<Square>(3.0);
}

int main() {
    // Create Circle object
    auto a = makeShape("circle");

    // Create Square object
    auto b = makeShape("square");

    // Display areas
    cout << "Area of Circle = " << a->area()
         << ", Area of Square = " << b->area() << endl;

    return 0;
}
