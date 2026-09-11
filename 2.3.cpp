#include <iostream>

using namespace std;

// Out via references

void minMax(const int a[], int n, int &mn, int &mx) {

    mn = mx = a[0];

    for (int i = 1; i < n; ++i) {

        if (a[i] < mn)

            mn = a[i];

        if (a[i] > mx)

            mx = a[i];

    }

}

// Out via pointers

void minMaxPtr(const int a[], int n, int *mn, int *mx) {

    *mn = *mx = a[0];

    for (int i = 1; i < n; ++i) {

        if (a[i] < *mn)

            *mn = a[i];

        if (a[i] > *mx)

            *mx = a[i];

    }

}

int main() {

    int data[] = {7, 2, 9, 4, 1};

    int lo, hi;

    minMax(data, 5, lo, hi);

    cout << "ref -> min=" << lo << " max=" << hi << endl;

    minMaxPtr(data, 5, &lo, &hi);

    cout << "ptr -> min=" << lo << " max=" << hi << endl;

    return 0;

}