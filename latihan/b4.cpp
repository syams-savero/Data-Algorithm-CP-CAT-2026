// ada 1 array berisi bilangan bulat
// pisahkan antar ganjil dan genap lalu jumalhkan masing masing
// cari selisih dari ganjil dan genap
// cari ouptut 1 angka yang bukan total genap, bukan total ganjil, bukan selisih juga

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int totalGenap = 0;
    int totalGanjil = 0;
    int selisih = 0;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (i % 2 == 0) {
            totalGenap += a[i];
        } else {
            totalGanjil += a[i];
        }
    }

    if (totalGenap > totalGanjil) {
        selisih = totalGenap - totalGanjil;
    } else {
        selisih = totalGanjil - totalGenap;
    }

    cout << totalGenap << " " << totalGanjil << " " << selisih << "\n";

    for (int i = 0; i <= 100; i++) {
        if (i != totalGenap && i != totalGanjil && i != selisih) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}