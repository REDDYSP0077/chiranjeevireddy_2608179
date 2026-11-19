
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // WRITE three student records
    ofstream out("students.txt");

    if (!out) {
        cerr << "Cannot open for write\n";
        return 1;
    }

    out << "Asha 91\n";
    out << "Ravi 78\n";
    out << "Meera 88\n";

    out.close();

    // READ records and calculate average
    ifstream in("students.txt");

    if (!in) {
        cerr << "Cannot open for read\n";
        return 1;
    }

    string name;
    int marks, total = 0, count = 0;

    while (in >> name >> marks) {
        cout << name << " scored " << marks << endl;
        total += marks;
        ++count;
    }

    in.close();

    if (count > 0) {
        cout << "Average = " << (double)total / count << endl;
    }

    return 0;
}
