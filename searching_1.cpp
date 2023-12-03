#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << " ========================================" << endl;
    cout << endl;
    cout << " || Program Searching  || " << endl;
    cout << endl;
    cout << " ========================================" << endl;
    cout << endl;

    vector<string> data;
    int counter = 1; // variabel counter untuk melacak data ke berapa

    while (true) {
        // Minta pengguna memasukkan data
        cout << "Input data or 'done' to exit: ";
        string input_data;
        getline(cin, input_data);

        // Periksa apakah pengguna ingin keluar
        if (input_data == "selesai") {
            break;
        }

        // Tambahkan data ke dalam vektor
        data.push_back(input_data);
        cout << "Data ke-" << counter << " telah dimasukkan." << endl;
        counter++;
    }

    while (true) {
        // Minta pengguna memasukkan kata kunci untuk pencarian
        cout << "Masukkan kata kunci untuk pencarian atau ketik 'selesai' untuk keluar: ";
        string kata_kunci;
        getline(cin, kata_kunci);

        // Kelitaka done maka exit
        if (kata_kunci == "done") {
            break;
        }

        // Pencarian Data
        vector<int> hasil_pencarian_index; // Simpan indeks elemen yang sesuai
        for (vector<string>::iterator it = data.begin(); it != data.end(); ++it) {
            const string& item = *it;

            // Ubah kedua string menjadi lowercase untuk pencarian case-insensitive
            string lower_item = item;
            transform(lower_item.begin(), lower_item.end(), lower_item.begin(), ::tolower);
            string lower_kata_kunci = kata_kunci;
            transform(lower_kata_kunci.begin(), lower_kata_kunci.end(), lower_kata_kunci.begin(), ::tolower);

            // Periksa apakah kata kunci ditemukan dalam item
            if (lower_item.find(lower_kata_kunci) != string::npos) {
                hasil_pencarian_index.push_back(distance(data.begin(), it)); // Simpan indeks elemen yang sesuai
            }
        }

        // Tampilkan hasil pencarian
        if (!hasil_pencarian_index.empty()) {
            cout << "Hasil Pencarian:" << endl;
            for (vector<int>::iterator it = hasil_pencarian_index.begin(); it != hasil_pencarian_index.end(); ++it) {
                cout << "Data ke-" << *it + 1 << ": " << data[*it] << endl;
            }
        } else {
            cout << "Tidak ditemukan hasil untuk kata kunci '" << kata_kunci << "'." << endl;
        }
    }
    cout << endl;
    cout << " ----            Terimakasih          ----" << endl;

    return 0;
}

