#include <iostream>
using namespace std;

class Box {
    int w, h, d;

public:
    // Main constructor
    Box(int w, int h, int d) : w(w), h(h), d(d) {
    }

    // Delegating constructor
    Box() : Box(1, 1, 1) {
    }

    // Delegating constructor for cube
    Box(int s) : Box(s, s, s) {
    }

    // Calculate volume
    int volume() const {
        return w * h * d;
    }
};

int main() {
    Box a;
    Box b(3);
    Box c(2, 3, 4);

    cout << a.volume() << " "
         << b.volume() << " "
         << c.volume() << endl;

    return 0;
}