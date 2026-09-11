#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    // Add two Point objects
    Point add(const Point &p) const
    {
        return Point(x + p.x, y + p.y);
    }

    // Set x value
    Point& setX(int v)
    {
        this->x = v;
        return *this;
    }

    // Set y value
    Point& setY(int v)
    {
        this->y = v;
        return *this;
    }

    // Display point
    void show() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Pass by reference
    void shift(Point &p)
    {
        p.setX(99);
    }

    // Pass by value
    void tryShift(Point p)
    {
        p.setX(-1);
    }
};

int main()
{
    Point a(1, 2), b(3, 4);

    Point c = a.add(b);
    c.show();

    a.shift(a);
    a.show();

    b.tryShift(b);
    b.show();

    return 0;
}