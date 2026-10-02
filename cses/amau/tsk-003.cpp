#include <iostream>

using namespace std;

int main() {
    string dna;

    long long a = 0;
    long long c = 0;
    long long g = 0;
    long long t = 0;
    long long r = 0;

    cin >> dna;

    int i = 0;

    while (i < dna.size()) {
        if (toupper(dna[i]) == 'A') {
            a++;
            c = 0;
            g = 0;
            t = 0;

            if (a > r) {
                r = a;
            }
        }

        if (toupper(dna[i]) == 'C') {
            c++;
            a = 0;
            g = 0;
            t = 0;

            if (c > r) {
                r = c;
            }
        }

        if (toupper(dna[i]) == 'G') {
            g++;
            a = 0;
            c = 0;
            t = 0;

            if (g > r) {
                r = g;
            }
        }

        if (toupper(dna[i]) == 'T') {
            t++;
            a = 0;
            c = 0;
            g = 0;

            if (t > r) {
                r = t;
            }
        }

        i++;
    }

    cout << r;

    return 0;
}