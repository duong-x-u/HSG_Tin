#include <iostream>
#include <string>
using namespace std;
int main() {
    freopen("N0604A.inp", "r", stdin);
    freopen("N0604A.out", "w", stdout);
    //Thuật toán này kiểu lọc lấy số ra á
    string a, b;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++){
        if (a[i] >= '0' && a[i] <= '9') {
            b += a[i]; 
        }
    }
    cout << b;
    return 0;
}