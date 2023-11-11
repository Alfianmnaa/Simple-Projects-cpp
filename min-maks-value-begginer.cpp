#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> angka;
    char lanjut;

    cout << "Kalkulator Nilai Min/Max" << endl;

    do {
        int n;
        cout << "Masukkan jumlah angka: ";
        cin >> n;

        if (n <= 0) {
            cout << "Jumlah angka harus lebih dari 0." << endl;
            continue;
        }

        cout << "Masukkan " << n << " angka: ";
        for (int i = 0; i < n; i++) {
            int angka_input;
            cin >> angka_input;
            angka.push_back(angka_input);
        }

        int min = *min_element(angka.begin(), angka.end());
        int max = *max_element(angka.begin(), angka.end());

        cout << "Nilai minimum adalah: " << min << endl;
        cout << "Nilai maksimum adalah: " << max << endl;

        angka.clear(); // Menghapus angka dari vektor untuk perhitungan berikutnya.

        cout << "Mau menghitung lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terima kasih telah menggunakan Kalkulator Nilai Min/Max." << endl;

    return 0;
}

