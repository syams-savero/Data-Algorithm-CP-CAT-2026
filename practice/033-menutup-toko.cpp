/*
Pak Dengklek membuka 4 toko kandang bebek.
Pada setiap tokonya, ia menjual  3 merek kandang,
satu kandang untuk setiap mereknya, dengan ukuran-ukuran sebagai berikut (dalam cm persegi):


            Luas Kandang Merek 1    Luas Kandang Merek 2    Luas Kandang Merek 3

Toko 1          225 x 335               299 x 278               300 x 250

Toko 2          215 x 394               144 x 718               300 x 290

Toko 3          200 x 400               240 x 333               142 x 619

Toko 4          314 x 298               411 x 198               333 x 222

Pak Dengklek memutuskan untuk menutup seluruh tokonya (dan kembali fokus beternak bebek). Untuk itu, ia akan menjual kembali seluruh kandangnya. 
Setiap kandang akan dihargai per cm perseginya dengan suatu harga bergantung pada mereknya. 
Berikut adalah harga jual kandang untuk setiap merek, per cm persegi (dalam rupiah):

            Harga

Merek 1     100

Merek 2     120

Merek 3     150

Pada akhirnya, berapa rupiah total hasil penjualan seluruh kandang Pak Dengklek untuk setiap mereknya?

Lengkapilah program di sebelah kanan agar mengeluarkan 
3 baris. Baris ke-i berisi total hasil penjualan seluruh kandang merek i, dalam rupiah.
*/

#include <iostream>
using namespace std;

int main() {

    int kandang[4][3]= {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga[3]= {100, 120, 150};

    for (int i = 0; i < 3; i++) {
        int total = 0;

        for (int j = 0; j < 4; j++) {
            total += kandang[j][i] * harga[i];
        }

        cout << total << endl;
    }
}