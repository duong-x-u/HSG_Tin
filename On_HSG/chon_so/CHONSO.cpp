#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CHONSO.INP","r",stdin);
    freopen("CHONSO.OUT","w",stdout);

    int N, M;
    if (!(cin >> N >> M)) {
        return 0;
    };
    vector<pair<int,int>> a; // {value, original_pos}
    a.reserve(N);

    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        a.emplace_back(x, i+1);
    }

    sort(
        a.begin(), a.end()
    ); // sắp tăng dần theo value
    auto ans = a[N - M];      // số lớn thứ M
    cout << ans.second << " " << ans.first << "\n";
    return 0;
}
