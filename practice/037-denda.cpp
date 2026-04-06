/*
Pak Dengklek berencana membeli bebek selama 
4 hari ke depan. Pada hari ke-i, Pak Dengklek akan membeli jantan[i] ekor bebek jantan dan betina[i] ekor bebek betina, sebagai berikut:

Jantan : 0, 10, 50, 60

Betina : 7, 80, 9, 40

Toko yang Pak Dengklek kunjungi cukup unik karena hanya menjual bebek secara berpasangan. Oleh karena itu, apabila Pak Dengklek membeli bebek jantan dan betina dengan jumlah yang berbeda, maka toko tersebut mengenakan denda sebesar 
1000
1000 rupiah dikalikan dengan selisih bebek jantan dan betina pada pembelian hari tersebut.

Pak Dengklek ingin mengetahui total denda yang harus ia bayarkan untuk membeli bebek-bebek selama 
4
4 hari ke depan sesuai rencananya. Lengkapilah program di sebelah kanan agar mengeluarkan total denda yang dimaksud.
*/

#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

int selisih(int jantan, int betina) {
    if (jantan > betina) {
        return jantan - betina;
    } else {
        return betina - jantan;
    }
}

int denda(int hari) {
    return 1000 * selisih(jantan[hari], betina[hari]);
}

int total_denda() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += denda(i);
    }

    return total;
}

int main() {
    cout << total_denda() << endl;
}