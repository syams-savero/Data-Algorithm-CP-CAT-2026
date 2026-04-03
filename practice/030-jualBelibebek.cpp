/*
Saat ini, Pak Dengklek tidak memiliki bebek. Ia berencana melakukan jual-beli bebek pada 
10 hari pertama bulan depan. Rencananya disusun dalam dua tabel berikut. Tabel sebelah kiri menyatakan banyaknya bebek yang dibeli pada setiap tanggal. Tabel sebelah kanan menyatakan banyaknya bebek yang dijual pada setiap tanggal.

        Tanggal	Beli    Tangal Jual
1       13              0
2       100             2
3       0               24
4       4               0
5       31              10
6       0               4
7       178             0
8       23              121
9       1               0
10      13              15


Lengkapilah program di sebelah kanan agar mengeluarkan 
10 baris. Baris ke-
i harus berisi total banyaknya bebek yang dimiliki Pak Dengklek pada akhir tanggal ke-
i, setelah jual-beli pada tanggal ke-
i tersebut dilakukan.
*/

#include <iostream>
using namespace std;

int main() {

    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    int total = 0;

    for (int i = 0; i < 10; i++) {
        total += beli[i];
        total -= jual[i];
        cout << total << endl;
    }
}