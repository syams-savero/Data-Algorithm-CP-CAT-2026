/*
Mulai:
mobil = 2
motor = 0

Setiap hari:
tambah 1 mobil
tambah (hari × 2) motor

Loop berhenti saat:
motor lebih dari 4 × mobil

Tugas:
Tentukan hari berhenti.
*/

#include <iostream>
using namespace std;

int main() {
    int mobil = 2;
    int motor = 0;
    int hari = 1;

    while (motor <= 4 * mobil) {
        mobil += 1;
        motor += hari * 2;
        hari += 1;
    }

    cout << hari - 1 << endl;
}