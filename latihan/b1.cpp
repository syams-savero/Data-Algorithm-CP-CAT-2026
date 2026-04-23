#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int rataRata = 0;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        rataRata += a[i];
    }

    rataRata /= N;
    int jumlah = 0;

    for (int i = 0; i < N; i++) {
        if (a[i] > rataRata) {
            jumlah++;
        }
    }

    cout << jumlah << "\n";

    return 0;
}