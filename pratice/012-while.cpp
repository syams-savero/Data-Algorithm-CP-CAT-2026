// remake soal sebelumnya menggunakan while

#include <iostream>
using namespace std;

int main() {
    int luasKandang = 12;
    int kandangBaru = 0;

    while (kandangBaru < 3) {
        luasKandang += 7;
        cout << luasKandang << endl;
        kandangBaru += 1;
    }
}