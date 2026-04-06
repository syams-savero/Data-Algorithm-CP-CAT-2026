/*
 * SOAL: PENGISIAN BEBEK PAK DENGKLEK
 *
 * Pak Dengklek memiliki 10 kandang bebek, dinomori dari 1 hingga 10. 
 * Pada mulanya, seluruh kandangnya kosong.
 *
 * Pak Dengklek kemudian mengisi kandang-kandang bebeknya sebagai berikut:
 * 1. Kandang 1-8, masing-masing diisi 2 ekor.
 * 2. Kandang 2-9, masing-masing diisi 10 ekor.
 * 3. Kandang 5-6, masing-masing diisi 1 ekor.
 * 4. Kandang 9-10, masing-masing diisi 3 ekor.
 * 5. Kandang 1-4, masing-masing diisi 7 ekor.
 * 6. Kandang 1-4, masing-masing diisi 2 ekor.
 * 7. Kandang 4-8, masing-masing diisi 6 ekor.
 *
 * TUGAS:
 * Tuliskan fungsi void isi_bebek_ke_dalam_kandang(awal, akhir, jumlah)
 * yang tidak mengembalikan nilai apapun, namun memperbarui jumlah bebek
 * di dalam kandang-kandang yang ditentukan.
 * 
 * HASIL:
 * Berapakah jumlah bebek terbanyak dalam suatu kandang setelah semua pengisian?
 */

#include <iostream>
#include <algorithm>

using namespace std;

int total_kandang = 10;
int bebek[11]; /* Indeks 1-10 */

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0;
    }
}

void isi_bebek_ke_dalam_kandang(int awal, int akhir, int jumlah) {
    for (int i = awal; i <= akhir; i++) {
        bebek[i] += jumlah;
    }
}

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1];
    for (int i = 2; i <= total_kandang; i++) {
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]);
    }
    return bebek_terbanyak;
}

int main() {
    kosongkan_kandang();

    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 1);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;

    return 0;
}
