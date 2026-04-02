/*
Pak Dengklek memiliki
67 bebek jantan dan 
98 bebek betina. Ia ingin menggiring bebek-bebeknya ke sawah. Bebek-bebeknya akan dibariskan dua-dua, sesuai jenis kelaminnya (jantan dan betina). Oleh karena itu, Pak Dengklek ingin mengetahui apakah banyaknya bebek jantannya adalah bilangan genap, begitu pula untuk bebek betinanya.

Bantulah Pak Dengklek menentukan hal tersebut, dengan cara melengkapi program di sebelah kanan.

Program tersebut harus mengeluarkan:

banyaknya bebek jantan adalah bilangan genap, apabila pernyataan tersebut berlaku
Setelah itu, program tersebut juga harus mengeluarkan:

banyaknya bebek betina adalah bilangan genap, apabila pernyataan tersebut berlaku
*/

// 10 % 2 = 0 (sisa dari pembagian) (genap)
// jantan = 67
// betina = 98

#include <iostream>
using namespace std;

int main() {
    int jantan = 67;
    int betina = 98;

    if (jantan % 2 == 0) {
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;
    }

    if (betina % 2 == 0) {
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
}