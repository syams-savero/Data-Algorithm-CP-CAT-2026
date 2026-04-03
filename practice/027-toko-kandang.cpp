/*
Pak Dengklek membuka sebuah toko kandang bebek. Ia menjual 
5 kandang bebek dengan ukuran-ukuran sebagai berikut:

225×335 cm persegi
215×394 cm persegi
198×400 cm persegi
314×298 cm persegi
299×278 cm persegi
Seorang pembeli ingin membeli kandang yang berukuran setidaknya 
80000 cm persegi. Ada berapa kandang di toko tersebut yang memenuhi?

Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya kandang yang memenuhi.
*/

#include <iostream>
using namespace std;

int main() {
    int kandang1 = 225 * 335;
    int kandang2 = 215 * 394;
    int kandang3 = 198 * 400;
    int kandang4 = 314 * 298;
    int kandang5 = 299 * 278;

    int hasil = 0;

    if (kandang1 >= 80000) {
        hasil++;
    }

    if (kandang2 >= 80000) {
        hasil++;
    }

    if (kandang3 >= 80000) {
        hasil++;
    }

    if (kandang4 >= 80000) {
        hasil++;
    }

    if (kandang5 >= 80000) {
        hasil++;
    }

    cout << hasil << endl;

}