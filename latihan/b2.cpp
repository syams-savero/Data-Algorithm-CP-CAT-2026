#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int pertama = 0;
    int terakhir = 0;
    int rataRata = 0;
    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        pertama = a[0];
        terakhir = a[N-1];
        rataRata += a[i];
    }

    int avg = rataRata / N; 

    for (int i = 0; i <= 100; i++) {
        if (rataRata % N !=  0) {
            if (i != a[0] && i != a[N-1] && i != avg) {
                cout << i << "\n";
                break;
            }
        } else {
            if (i != a[0] && i != a[N-1]) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}