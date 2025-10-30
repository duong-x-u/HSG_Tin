#include <string>
#include <iostream>
using namespace std;
int main() {
    freopen("N0602A.inp", "r", stdin);
    freopen("N0602A.out", "w", stdout);
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++) {
        a[i] = toupper(a[i]);
    }
    cout << a;
    return 0;
}