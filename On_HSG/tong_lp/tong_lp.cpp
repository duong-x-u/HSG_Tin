#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TONGLP.OUT", "w", stdout);

    for (int n = 100; n <= 999; ++n) {
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;
        int sum = a*a*a + b*b*b + c*c*c;
        if (sum == n) cout << n << "\n";
    }

    return 0;
}
