/*
Sekarang, coba kerjakan kembali soal sebelumnya namun dengan menggunakan bantuan fungsi biaya. Perhatikan bahwa dengan cara ini, logika perhitungan biaya pembelian bebek bisa dituliskan hanya sekali saja.
*/

#include <iostream>
using namespace std;

int biaya(int x) {
    if (x < 10) {
        return x * 100000;
    } else if (x <= 50) {
        return x * 75000;
    } else {
        return x * 50000;
    }
}

int main() {
  
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        cout << biaya_jantan + biaya_betina << endl;
    }
}