#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("SUMEVOD.INP", "r", stdin);
    freopen("SUMEVOD.OUT", "w", stdout);

    int n, x;
    cin >> n;
    //cin >> x;
    int tongLe = 0, tongChan = 0;

    for (int i = 1; i <= n; i++){
        cin >> x;
        if (x%2 == 0) {
            tongChan += x;
        } else {
            tongLe += x;
        }
    }
    cout << tongChan << endl << tongLe;


    return 0;
}
