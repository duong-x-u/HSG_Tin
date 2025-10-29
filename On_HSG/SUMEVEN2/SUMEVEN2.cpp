#include <iostream>
using namespace std;

int main() {
    freopen("SUMEVEN2.inp", "r", stdin);
    freopen("SUMEVEN2.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n;
    long long chan = 0, le = 0;
    for (int i=0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0){
            chan++;
        } else {
            le++;
        }
    }

    long long ketqua = le * (le -1) / 2 + chan * (chan - 1) /2;
    cout << ketqua;

    return 0;
}