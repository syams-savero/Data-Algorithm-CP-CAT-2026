/*
Pak Dengklek memiliki sebuah kandang bebek seluas 
12 meter persegi.

Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
7 meter persegi lebih luas daripada kandang sebelumnya.

Buatlah program yang mengeluarkan ukuran luas kandang-kandang (dalam meter persegi) sesuai urutan pembelian yang harus dilakukan, satu baris untuk setiap kandang, untuk tiga bulan ke depan, dengan format:

1: luas kandang untuk bulan 1
2: luas kandang untuk bulan 2
3: luas kandang untuk bulan 3
Lengkapilah program di sebelah kanan. Pastikan Anda melengkapi kondisi perulangan while dengan tepat.
*/

// luas = 12 meter persegi
// kandang baru ingin 7 meter persegi lebih luas
// counter menggunakan nomor_baris = 1

#include <iostream>
using namespace std;

int main() {
    int luasKandang = 12;
    int nomor_baris = 1;

    while (nomor_baris <= 3) {
        luasKandang += 7;
        cout << nomor_baris << ": " << luasKandang << endl;
        nomor_baris += 1;
    }
}