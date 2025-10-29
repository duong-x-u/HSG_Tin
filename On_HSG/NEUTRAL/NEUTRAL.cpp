#include <iostream>
using namespace std;

int main(){
    freopen("NEUTRAL.inp", "r", stdin);
    freopen("NEUTRAL.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    long long A_am=0, A_duong=0, B_am=0, B_duong =0;
    long long x;

    for (int i = 0; i < n; i++ ) {
        cin >> x;
        if (x>0) {
            A_duong++;
        } else if (x<0){
            A_am++;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x>0){
            B_duong++;
        } else if (x<0) {
            B_am++;
        }
    }

    cout << A_am * B_duong + B_am * A_duong;

    return 0;
}