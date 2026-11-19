
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 8, 1, 9, 4};

    // Find the first element greater than 5
    auto it = find_if(v.begin(), v.end(),
                      [](int x) {
                          return x > 5;
                      });

    if (it != v.end()) {
        cout << "First element > 5 : " << *it << endl;
    }

    // Sort the vector in ascending order
    sort(v.begin(), v.end());

    // Find the first element >= 4
    auto lb = lower_bound(v.begin(), v.end(), 4);

    cout << "lower_bound(4) index = "
         << (lb - v.begin()) << endl;

    // Generate all permutations
    vector<int> p = {1, 2, 3};

    cout << "Permutations: ";

    do {
        for (int x : p) {
            cout << x;
        }
        cout << " ";
    } while (next_permutation(p.begin(), p.end()));

    cout << endl;

    return 0;
}
