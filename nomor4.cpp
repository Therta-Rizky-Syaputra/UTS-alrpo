#include <iostream>
using namespace std;

int main() {
    int angka;

    // Meminta input dari pengguna
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Menampilkan angka genap
    cout << "Angka Genap: ";
    for (int i = 0; i <= angka; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Menampilkan angka ganjil
    cout << "Angka Ganjil: ";
    for (int i = 0; i <= angka; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
