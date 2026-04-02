/*
Pak Dengklek memiliki kandang bebek dengan panjang 
364
364 cm dan lebar 
79
79 cm. Berapakah luas dan kelilingnya?

Bantulah Pak Dengklek dengan membuat sebuah program C++ yang menghasilkan keluaran berikut:

Baris pertama berisi luas kandang, dalam cm persegi.
Baris kedua berisi keliling kandang, dalam cm.
Persisnya,

Luas kandang adalah hasil perkalian dari panjang dan lebar kandang.
Keliling kandang adalah dua kali dari hasil penjumlahan panjang dan lebar kandang.  */

#include <iostream>

int main() {
    //luas
    std::cout << 364 * 79 << std::endl;
    // keliling
    std::cout << (364 + 79) * 2 << std::endl;
}