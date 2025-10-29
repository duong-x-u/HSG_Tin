#include <iostream>
using namespace std;

int main(){
    freopen("SUMODD3.inp", "r", stdin);
    freopen("SUMODD3.out", "w", stdout);

    int n;
    cin >> n;

    long long le = 0, chan = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }

    long long ketqua = 0;
    // Trường hợp 1: 3 số lẻ
    if (le >= 3) {
        ketqua += le * (le - 1) * (le - 2) / 6;
    }
    // Trường hợp 2: 1 số lẻ và 2 số chẵn
    if (le >= 1 && chan >= 2) {
        ketqua += le * (chan * (chan - 1) / 2);
    }

    cout << ketqua;

    return 0;
}
