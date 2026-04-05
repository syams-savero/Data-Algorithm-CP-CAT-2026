/*
Pak Dengklek berencana membeli bebek selama 
4 hari ke depan. Pada hari ke-i, Pak Dengklek akan membeli jantan[i] ekor bebek jantan dan betina[i] ekor bebek betina, sebagai berikut:

Jantan : 0, 10, 50, 60

Betina : 7, 80, 9, 40

Toko tempat Pak Dengklek membeli bebek memiliki peraturan yang cukup unik. Pada setiap pembelian, seluruh bebek yang dibeli harus berjenis kelamin sama. Sehingga, setiap harinya Pak Dengklek harus melakukan dua pembelian: membeli bebek-bebek jantan, lalu bebek-bebek betina.
Pada setiap pembelian, harga setiap bebek bergantung pada total banyaknya bebek yang dibeli, sebagai berikut:

Kurang dari 10: harga setiap bebek adalah 100.000 rupiah.
Antara 10 sampai dengan 50: harga setiap bebek adalah 75.000 rupiah.
Lebih dari 50: harga setiap bebek adalah 50.000 rupiah.
Lengkapilah program di sebelah kanan agar mengeluarkan 
4 baris. Baris ke-i harus berisi total biaya yang dikeluarkan Pak Dengklek untuk membeli seluruh bebek pada hari ke-i (dalam rupiah).
*/

// beli bebek selama 4 hari
// bikin array jantan dan betina
// beli bebek jantan dan betina (sehari beli 2x)
// 10 < = 100.000
// 10 - 50 = 75.000
// 50 > = 50.000
// tampilkan total uang yang dikeluarkan selama 4 hari sebanyak 4 baris

#include <iostream>
using namespace std;

int main() {

    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {

        int bebekJantan = 0;
        int bebekBetina = 0;

        // jantan
            if (jantan[i] < 10) {
                bebekJantan = jantan[i] * 100000;
            } else if (jantan[i] <= 50) {
                bebekJantan = jantan[i] * 75000;
            } else {
                bebekJantan = jantan[i] * 50000;
            }
        

        // Betina
            if (betina[i] < 10) {
                bebekBetina = betina[i] * 100000;
            } else if (betina[i] <= 50) {
                bebekBetina = betina[i] * 75000;
            } else {
                bebekBetina = betina[i] * 50000;
            }

         int harga = bebekJantan + bebekBetina;

        cout << harga << endl;
    }
}
