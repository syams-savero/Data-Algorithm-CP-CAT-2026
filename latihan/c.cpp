#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    if (S < T) {
        for (int i = 0; i < N; i++) {
            cout << S[i] << T[i];
        }
    } else {
        for (int i = 0; i < N; i++) {
            cout << T[i] << S[i];
        }
    }
    
    cout << endl;
}