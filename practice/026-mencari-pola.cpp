/*
Bebek-bebek Pak Dengklek senang mengirimkan pesan misterius.

Bebek ke-1 mengirimkan pesan berikut:

*
Bebek ke-2 mengirimkan pesan berikut:

**
**
Bebek ke-3 mengirimkan pesan berikut:

*.*
.*.
*.*
...

Bebek ke-7 mengirimkan pesan berikut:

*.....*
.*...*.
..*.*..
...*...
..*.*..
.*...*.
*.....*
Carilah polanya, kemudian lengkapilah program di sebelah kanan agar mengeluarkan pesan dari bebek ke-10!
*/

#include <iostream>
using namespace std;

int main() {

    int N = 10;

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            if (i == k || i + k == N - 1) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}