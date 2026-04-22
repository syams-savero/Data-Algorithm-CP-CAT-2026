#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    int mn = 1e18, mx = -1e18, sm = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        sm += a[i];
    }

    for (int i = 0; i <= 100; i++) {
        if (i != mn && i != mx && i != sm) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}