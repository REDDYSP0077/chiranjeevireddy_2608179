#include <iostream>
using namespace std;

class Trace
{
    int id;

public:
    Trace(int i) : id(i)
    {
        cout << "Construct #" << id << endl;
    }

    ~Trace()
    {
        cout << "Destruct #" << id << endl;
    }
};

int main()
{
    cout << "Enter block" << endl;

    {
        Trace a(1), b(2);

        cout << "Working..." << endl;
        cout << "Left block" << endl;
    }

    return 0;
}