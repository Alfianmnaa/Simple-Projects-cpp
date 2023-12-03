#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Fungsi perbandingan untuk pengurutan berdasarkan alfabet
bool compareAlphabetically(const string& a, const string& b) {
    return a < b;
}

// Fungsi konversi int ke string tanpa to_string
string intToString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    while (true) {
        vector<string> kata;
        vector<int> angka;

        // Input kata dan angka
        int jumlahKata, jumlahAngka;
        cout << "Masukkan jumlah kata: ";
        cin >> jumlahKata;

        cout << "Masukkan kata-kata:\n";
        for (int i = 0; i < jumlahKata; ++i) {
            string inputKata;
            cin >> inputKata;
            kata.push_back(inputKata);
        }

        cout << "Masukkan jumlah angka: ";
        cin >> jumlahAngka;

        cout << "Masukkan angka-angka:\n";
        for (int i = 0; i < jumlahAngka; ++i) {
            int inputAngka;
            cin >> inputAngka;
            angka.push_back(inputAngka);
        }

        // Menggabungkan vektor kata dan angka
        vector<string> gabungKata;
        for (size_t i = 0; i < kata.size(); ++i) {
            gabungKata.push_back(kata[i]);
        }
        for (size_t i = 0; i < angka.size(); ++i) {
            gabungKata.push_back(intToString(angka[i]));
        }

        // Pilihan pengurutan
        char pilihanPengurutan;
        cout << "Pilih pengurutan (A: dari kecil ke besar, D: dari besar ke kecil): ";
        cin >> pilihanPengurutan;

        // Mengurutkan gabungan vektor berdasarkan alfabet
        if (pilihanPengurutan == 'A' || pilihanPengurutan == 'a') {
            sort(gabungKata.begin(), gabungKata.end(), compareAlphabetically);
        } else if (pilihanPengurutan == 'D' || pilihanPengurutan == 'd') {
            sort(gabungKata.begin(), gabungKata.end(), greater<string>());
        } else {
            cout << "Pilihan tidak valid.\n";
            continue; // Mengulang loop jika pilihan tidak valid
        }

        // Menampilkan hasil pengurutan
        cout << "\nHasil setelah diurutkan:\n";

        // Output kata-kata terlebih dahulu
    
        for (size_t i = 0; i < jumlahKata; ++i) {
            cout << gabungKata[i] << " ";
        }

        // Output angka
   		cout<<" "<< endl;
        for (size_t i = jumlahKata; i < gabungKata.size(); ++i) {
            cout << gabungKata[i] << " ";
        }

        // Tanyakan apakah pengguna ingin melanjutkan
        char lanjut;
        cout << "\nLanjutkan? (y/n): ";
        cin >> lanjut;

        if (lanjut != 'y' && lanjut != 'Y') {
            break; // Keluar dari loop jika pengguna tidak ingin melanjutkan
        }
    }

    return 0;
}

