/*
Pak Dengklek ingin mengganti lagi kata sandi kandangnya menjadi sedikit rumit, sesuai dengan tanggal lahir bebek tertuanya, dengan format:

[tahun+10]-[bulan]-[tanggal+7]
Sebagai contoh, untuk tanggal 1 Januari 2023, kata sandi sesuai format di atas adalah:

2033-Januari-8
Diketahui, bebek tertua Pak Dengklek lahir pada 15 Februari 2023. Lengkapilah program di sebelah kanan agar mengeluarkan sebuah baris berisi kata sandi barunya.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int tahun = 2023;
    int tanggal = 1;
    string bulan = "Februari";  // bisa juga std::string bulan = "Februari";

    cout << tahun + 10 << "-" << bulan << "-" << tanggal + 10 << endl;
}