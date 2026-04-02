/*
Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya, dengan ketentuan berikut:

Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.
Luas kolam (dalam cm persegi) adalah bilangan genap.
Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.
Berapakah luas kolam terkecil yang memenuhi seluruh syarat tersebut? Lengkapilah program di sebelah kanan agar mengeluarkan luas yang diminta.
*/

#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        if (luas % 2 != 0) {
            continue;
        }

        bool kuadratSempurna = false;

        for (int k = 1; k * k <= luas; k++) {
            if (k * k == luas) {
                kuadratSempurna = true;
                break;
            }
        }

        if (kuadratSempurna) {
            cout << luas << endl;
            break;
        }
    }
}