#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5, b = 9;
    cout << "Số nhỏ nhất" << min(a, b) << "\n"; //Ít số thì xài ()
    cout << "Số lớn nhất" << max(a, b) << "\n";

    int x = 3, y = 7, z = 1;
    cout << "Số nhỏ nhất" << min({x, y, z}) << "\n"; //Nhiều số thì xài { () }
    cout << "Số lớn nhất" << max({x, y, z}) << "\n";

    return 0;
}
