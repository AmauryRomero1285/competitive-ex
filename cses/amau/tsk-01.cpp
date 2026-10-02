// weird algorithm || Collatz's conjecture
#include <iostream>
using namespace std;

int main() {
    long long r;

    cin >> r;
    cout << r << " ";
    while (r != 1) {
        if (r % 2 == 1) {
            r = (r * 3) + 1;
        } else {
            r = r / 2;
        }
        cout << r << " ";
    }

    cout << endl;
    return 0;
}