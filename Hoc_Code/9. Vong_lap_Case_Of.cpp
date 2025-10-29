#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    cout << "Nhap so tu 2 den 6: ";
    cin >> choice;

    switch (choice) {
        case 2:
            cout << "Mon 2: Pho bo";
            break;
        case 3:
            cout << "Mon 3: Bun cha";
            break;
        case 4:
            cout << "Mon 4: Com tam";
            break;
        case 5:
            cout << "Mon 5: Mi xao";
            break;
        case 6:
            cout << "Mon 6: Banh mi";
            break;
        default:
            cout << "Khong co mon nay!";
    }

    return 0;
}
