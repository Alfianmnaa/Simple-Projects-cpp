#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> angka;
    string input_str;
    char pilihan;
    char lanjut;

    cout << "============================" << endl;
    cout << "  Kalkulator Nilai Min/Max  " << endl;
    cout << "============================" << endl;

    do {
        cout << "Masukkan angka (gunakan koma sebagai pemisah, misal: 12,15,27,78): ";
        cin >> input_str;

        stringstream ss(input_str);
        int angka_input;
        char delimiter;

        while (ss >> angka_input) {
            angka.push_back(angka_input);
            if (ss.peek() == ',') {
                ss.ignore();
            }
        }

        if (angka.empty()) {
            cout << "Tidak ada angka yang dimasukkan." << endl;
        } else {
            cout << "Pilih operasi:" << endl;
            cout << "a) Cari nilai minimum" << endl;
            cout << "b) Cari nilai maksimum" << endl;
            cout << "Pilihan (a/b): ";
            cin >> pilihan;

            if (pilihan == 'a' || pilihan == 'A') {
                int min = *min_element(angka.begin(), angka.end());
                cout << "Nilai minimum adalah: " << min << endl;
            } else if (pilihan == 'b' || pilihan == 'B') {
                int max = *max_element(angka.begin(), angka.end());
                cout << "Nilai maksimum adalah: " << max << endl;
            } else {
                cout << "Pilihan tidak valid." << endl;
            }
        }

        angka.clear(); // Menghapus angka dari vektor untuk perhitungan berikutnya.

        cout << "Mau menghitung lagi? (y/n): ";
        cin >> lanjut;
        cout << "============================" << endl;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terima kasih telah menggunakan Kalkulator Nilai Min/Max." << endl;

    return 0;
}

