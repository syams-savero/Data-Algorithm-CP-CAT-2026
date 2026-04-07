/*
Pak Dengklek memiliki sebuah kandang bebek unik yang memiliki penampang berupa segitiga, yang berukuran:

alas: 1213 desimeter
tinggi: 1619 desimeter
Cetaklah luas penampangnya, dalam desimeter persegi! Luas sebuah segitiga adalah setengah dari hasil perkalian alas dan tingginya.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double alas = 1213;
    double tinggi = 1619;

    double luas = alas * tinggi;
    cout << fixed << setprecision(1) << luas << endl;
}