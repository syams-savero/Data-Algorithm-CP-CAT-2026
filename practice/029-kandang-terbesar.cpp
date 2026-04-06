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

    int kandang[5] = {
        225 * 335,
        215 * 394,
        198 * 400,
        314 * 298,
        299 * 278
    };

    int terbesar = kandang[0];

    for (int i = 1; i <= 5; i++) {
        if (kandang[i] > terbesar) {
            terbesar = kandang[i];
        }
    }

    cout << terbesar << endl;
}