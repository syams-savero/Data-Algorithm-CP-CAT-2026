/*
Pak Dengklek memiliki 

63 bebek jantan dan 

192 bebek betina.

Pak Dengklek akan melakukan jual-beli bebek selama dua bulan ke depan sebagai berikut:

Pada bulan pertama, Pak Dengklek akan:
membeli bebek betina sebanyak total bebek jantan yang ada, lalu
menjual sepertiga dari bebek-bebek jantannya.
Pada bulan kedua, Pak Dengklek akan:
membeli bebek jantan sebanyak total bebek betina yang ada, lalu
menjual 
10 bebek betinanya.
Berapakah total banyaknya bebek Pak Dengklek setelah bulan kedua? Lengkapilah program sebelah kanan agar mengeluarkan total yang diminta.
*/

#include <iostream>
using namespace std;

int main() {
    int jantan = 63;
    int betina = 192;

    // bulan pertama
    betina = betina + jantan;
    jantan = jantan - 21;

    // bulan kedua
    jantan = jantan + betina;
    betina = betina - 10;

    cout << jantan + betina << endl;
}