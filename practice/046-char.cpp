/*
Pak Dengklek memiliki sebuah string: thequickbrownfoxjumpsoverthelazydog. Pak Dengklek ingin melakukan operasi berikut pada setiap karakter pada string tersebut:

Pertama-tama, setiap karakter dijadikan huruf kapital.
Kemudian, setiap karakter diganti menjadi karakter selanjutnya secara alfabetis.
Pengecualian untuk karakter terakhir Z, diganti menjadi karakter A.
Cetaklah string hasilnya!
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string teks = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : teks) {
        c -= 32;
        if (c == 'Z') {
            c = 'A';
        } else {
            c++;
        }

        cout << c;
    }

    cout << endl;
 }