/*
Pak Dengklek membeli kandang bebek baru, yang dilengkapi dengan fitur kata sandi. Pak Dengklek ingin mengganti kata sandinya setiap bulan, dengan strategi berikut:

Pada bulan pertama, kata sandinya 
174
174.
Untuk bulan kedua dan seterusnya, kata sandinya adalah kata sandi pada bulan sebelumnya, dikali 
23
23.
Buatlah program yang mencetak sandi Pak Dengklek pada bulan pertama, kedua, dan ketiga!
*/

#include <iostream>
using namespace std;

int main() {
    int sandi = 174;

    // sandi bulan kedua
    sandi = sandi * 23;     //4002
    cout << sandi << endl;

    // sandi bulan ketigga
    sandi = sandi * 23;     //92046
    cout << sandi << endl;
}