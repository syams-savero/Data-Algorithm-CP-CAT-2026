/*
Pak Dengklek memiliki 
3 buah kandang:

Kandang A berukuran 
364×79 cm persegi.
Kandang B berukuran 
243×99 cm persegi.
Kandang C berukuran 
189×155 cm persegi.
Pak Dengklek ingin mengetahui kandang yang luasnya terbesar dan terkecil. Lengkapilah program di sebelah kanan agar mengeluarkan dua buah baris:

Baris pertama berisi nama kandang yang luasnya terbesar.
Baris pertama berisi nama kandang yang luasnya terkecil.
Dijamin bahwa luas ketiga kandang tersebut berbeda-beda.
*/

// kandang A = 364 x 79 cm persegi
// kandang B = 243 x 99 cm persegi
// kandang C = 189 x 155 cm persegi

#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;
    string terbesar;
    string terkecil;

    if (A > B && A > C) {
        terbesar = "A";

        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B > A && B > C) {
        terbesar = "B";

        if (A < C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else if (C > A && C > B) {
        terbesar = "C";

        if (A < B) {
            terkecil = "A";
        } else {
            terkecil = "B";
        }
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}