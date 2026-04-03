/*
Pak Dengklek membuka 4 toko kandang bebek. Pada setiap tokonya, 
ia menjual 3 merek kandang, satu kandang untuk setiap mereknya, dengan ukuran-ukuran sebagai berikut (dalam cm persegi):


            Luas Kandang Merek 1    Luas Kandang Merek 2    Luas Kandang Merek 3

Toko 1          225 x 335               299 x 278               300 x 250

Toko 2          215 x 394               144 x 718               300 x 290           

Toko 3          200 x 400               240 x 333               142 x 619

Toko 4          314 x 298               411 x 198               333 x 222


Seorang pembeli ingin membeli kandang yang berukuran setidaknya 80000 cm persegi. 
Di antara seluruh kandang dari seluruh toko, ada berapa kandang yang memenuhi? Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya kandang yang memenuhi.
*/

#include <iostream>
using namespace std;

int main() {

    int kandang[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (kandang[i][j] >= 80000) {
                total++;
            }
        }
    }

    cout << total << endl;
}