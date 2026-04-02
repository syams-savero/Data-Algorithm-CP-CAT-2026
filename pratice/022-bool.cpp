/*
Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). Ia ingin menjual satu (atau lebih) kandang yang memenuhi syarat berikut:

panjang sisinya kelipatan 2, namun
panjang sisinya bukan kelipatan 3.
Apakah ada kandang yang dijual? Lengkapilah program di sebelah kanan, agar mengeluarkan sebuah baris berisi:

ada, apabila ada kandang yang dijual, atau
tidak ada, apabila tidak ada.
*/

// punya kandang persegi 121 hingga 125
// mau dijual yang panjang sisi nya kelipatan 2 dan bukan kelipatan 3

#include <iostream>
using namespace std;

int main() {

    bool adaYangDijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan2 = sisi % 2 == 0;
        bool kelipatan3 = sisi % 3 == 0;

        if (kelipatan2 && !kelipatan3) {
            adaYangDijual = true;
        }
    }

    if (adaYangDijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}