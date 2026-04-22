#include <bits/stdc++.h>
using namespace std;

bool shot[10][10] = {};
int hits = 0;

int shoot(int r, int c) {
    if (r < 0 || r >= 10 || c < 0 || c >= 10) return -99;
    if (shot[r][c]) return -99;
    shot[r][c] = true;
    cout << (r+1) << " " << (c+1) << "\n";
    cout.flush();
    int res; cin >> res;
    if (res == -1) exit(0);
    if (res == 1) hits++;
    return res;
}

void expand(int r, int c, int dr, int dc) {
    for (int i = 1; i <= 4 && hits < 5; i++) {
        int res = shoot(r + dr*i, c + dc*i);
        if (res == 0 || res == -99) break;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int r = 0; r < 10 && hits < 5; r++) {
        for (int c = 0; c < 10 && hits < 5; c++) {
            if ((c + r * 2) % 5 != 0) continue;

            int res = shoot(r, c);
            if (res == 0) continue;

            int hr = r, hc = c;
            expand(hr, hc,  0, +1);
            expand(hr, hc,  0, -1);
            expand(hr, hc, +1,  0);
            expand(hr, hc, -1,  0);
        }
    }

    return 0;
}