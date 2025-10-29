#include <iostream>

using namespace std;

int main() {
    // Make sure the input file is named SUMEVEN3.INP as per the problem description
    freopen("SUMEVEN3.INP", "r", stdin);
    freopen("SUMEVEN3.OUT", "w", stdout);
    
    int n;
    cin >> n;

    long long chan = 0;
    long long le = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }

    long long ket_qua = 0;

    // Case 1: Three even numbers
    // The number of ways to choose 3 evens from 'chan' evens is C(chan, 3)
    if (chan >= 3) {
        ket_qua += chan * (chan - 1) * (chan - 2) / 6;
    }

    // Case 2: One even and two odd numbers
    // The number of ways is C(chan, 1) * C(le, 2)
    if (chan >= 1 && le >= 2) {
        ket_qua += chan * (le * (le - 1) / 2);
    }

    cout << ket_qua;

    return 0;
}
