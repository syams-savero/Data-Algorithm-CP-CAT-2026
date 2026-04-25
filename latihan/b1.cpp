// bukan bilangan terkecil dan juga bukan total jumlah
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int total = 0;
    int mn = 1e18;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        total += a[i];
    }

    for (int i = 0; i <= 100; i++) {
        if (i != mn && i != total) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}

