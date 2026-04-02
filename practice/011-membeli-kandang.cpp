/*
Pak Dengklek memiliki sebuah kandang bebek seluas 
12 meter persegi.

Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
7 meter persegi lebih luas daripada kandang sebelumnya.

Lengkapilah program di sebelah kanan agar mengeluarkan ukuran luas kandang-kandang (dalam meter persegi) sesuai urutan pembelian yang harus dilakukan, satu baris untuk setiap kandang, untuk tiga bulan ke depan.
*/

// luas kandang bebek = 12 meter persegi
// tiap bulan ingin beli kandang baru 7 meter persegi lebih luas dari kandang sebelumnya
// hitung luas kandang yang diburuhkan hingga 3 bulan kedepan

#include <iostream>
using namespace std;

int main() {
    int luasKandang = 12;

    // bulan pertama
    luasKandang += 7;
    cout << luasKandang << endl;

    // bulan kedua
    luasKandang += 7;
    cout << luasKandang << endl;

    // bulan ketiga
    luasKandang += 7;
    cout << luasKandang << endl;
}