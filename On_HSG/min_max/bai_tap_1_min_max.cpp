#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("NUMBER.INP", "r", stdin);
    freopen("NUMBER.OUT", "w", stdout);

    int n;
    cin >> n; // số ptử

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int so_nho_nhat = *min_element(a.begin(), a.end());
    int so_lon_nhat = *max_element(a.begin(), a.end());

    cout << "Số nhỏ nhất là: " << so_nho_nhat << endl;
    cout << "Số lớn nhất là: " << so_lon_nhat << endl;

    return 0;
}
