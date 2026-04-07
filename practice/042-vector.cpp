// vector adalah array fleksibel

#include <iostream>
#include <vector>
using namespace std;

void jumlah(vector<int> &a, int b) {
    for (int i = 0; i < a.size(); i++) {
        a[i] += b;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    jumlah(a, 5);

    int total = 0;
    for (int x : a) {
        total += x;
    }

    cout << total << endl;
}