/*
Pak Dengklek memiliki 
100 kandang, dinomori dari 
1 sampai 
100. Setiap kandang memiliki lampu yang terhubung saklar. Pada mulanya, seluruh lampu kandang dalam kondisi mati.

Iseng-iseng, Pak Dengklek akan melakukan hal berikut setiap jam, dimulai dari pukul 
1 sampai dengan pukul 
10:

Pada pukul 
p, Pak Dengklek akan menekan setiap saklar lampu kandang yang nomornya merupakan kelipatan 
p.
Ketika saklar lampu sebuah kandang ditekan, lampu yang tadinya mati akan menyala, dan sebaliknya: lampu yang tadinya menyala akan menjadi mati.

Setelah keseluruhan proses selama 
10 jam tersebut dilakukan, ada berapa lampu yang menyala? Lengkapilah program di sebelah kanan agar mengeluarkan banyaknya lampu yang menyala pada akhirnya.
*/

#include <iostream>
using namespace std;

int main() {

    bool lampu[101];
    int lampuNyala = 0;

    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // jam
    for (int p = 1; p <= 10; p++) {
        for (int i = 1; i <= 100; i++) {

            if (i % p == 0) {
                lampu[i] = !lampu[i];
            }
        }
    }

    // hitung yang nyala
    for (int i = 1; i <= 100; i++) {
        if (lampu[i]) {
            lampuNyala++;
        }
    }

    cout << lampuNyala << endl;
}