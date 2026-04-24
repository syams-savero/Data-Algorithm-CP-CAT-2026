#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i <= 100; i++) {
        if (i != a[1] && i != a[N - 2] && i != a[N/2]) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}