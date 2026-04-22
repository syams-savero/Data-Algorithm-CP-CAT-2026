#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, k, d;    // Tarif awal, biaya tiap kilometer, jarak kilometer
    cin >> s >> k >> d;

    cout << s + k * d << "\n";

    return 0;
}