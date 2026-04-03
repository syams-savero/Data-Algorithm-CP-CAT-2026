/*
Pak Dengklek membuka sebuah toko kandang bebek. Ia menjual 
5 kandang bebek dengan ukuran-ukuran sebagai berikut:

225×335 cm persegi
215×394 cm persegi
198×400 cm persegi
314×298 cm persegi
299×278 cm persegi
Berapakah luas kandang terbesar dalam cm persegi?
*/

#include <iostream>
using namespace std;

int main() {

    int kandang[5];

    kandang[0] = 225 * 335;
    kandang[1] = 215 * 394;
    kandang[2] = 198 * 400;
    kandang[3] = 314 * 298;
    kandang[4] = 299 * 278;

    int terbesar = kandang[0];

    for (int i = 0; i < 5; i++) {
        if (kandang[i] > terbesar) {
            terbesar = kandang[i];
        }
    }

    cout << terbesar << endl;
}