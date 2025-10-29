#include <string>
#include <iostream>
using namespace std;

int main(){
    freopen("N0601A.inp", "r", stdin);
    freopen("N0601A.out", "w", stdout);

    string a;
    getline(cin, a); // Dùng getline để đọc cả dòng including khoảng trắng

    cout << a.length(); // Hoặc cout << a.size();
    return 0;
}
