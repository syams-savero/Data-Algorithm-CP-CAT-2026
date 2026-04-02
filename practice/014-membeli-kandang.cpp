/*
Pak Dengklek memiliki sebuah kandang bebek seluas 
12 meter persegi.

Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
7 meter persegi lebih luas daripada kandang sebelumnya.

Setelah 
10 bulan berlalu, berapakah total luas kandang yang dimiliki Pak Dengklek? Lengkapilah program di sebelah kanan agar mengeluarkan total yang dimaksud.
*/

// luas kandang = 12 meter persegi
// luas kandang baru yang diinginkan = 7 meter persegi lebih luas
// berapa total luas kandang yang dimiliki?

#include <iostream>
using namespace std;

int main() {
    int luas = 12;
    int kandangBaru = 0;
    int totalLuas = luas;

    while (kandangBaru < 10) {
        luas += 7;
        totalLuas += luas;
        kandangBaru += 1;
    }

    cout << totalLuas << endl;
}