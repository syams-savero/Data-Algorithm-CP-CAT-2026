/*
Pak Dengklek memiliki 
67 bebek jantan dan 
98 bebek betina. Ia ingin memasukkan bebek-bebeknya ke dalam kandang-kandang, sedemikian sehingga setiap kandang terisi penuh dan berisi banyaknya bebek yang sama. Dengan kata lain, total banyaknya bebek harus merupakan kelipatan dari kapasitas kandang.

Pak Dengklek pergi ke toko yang menjual kandang-kandang dengan lima jenis kapasitas: 
1 bebek, 
3 bebek, 
5 bebek, 
11 bebek, dan 
13 bebek. Ia ingin membeli satu jenis kandang saja. Kapasitas kandang terbesar manakah yang mungkin Pak Dengklek beli?
*/

// jantan = 67
// betina = 98
// kandang yang muat bebek dengan jumlah yang sama

#include <iostream>
using namespace std;

int main() {
    int jantan = 67;
    int betina = 98;
    int total = jantan + betina;

    if (total % 13 == 0) {
        cout << 13 << endl;
    } else if (total % 11 == 0) {
        cout << 11 << endl;
    } else if (total % 5 == 0) {
        cout << 5 << endl;
    } else if (total % 3 == 0) {
        cout << 3 << endl;
    } else if (total % 1 == 0) {
        cout << 1 << endl;
    }
}