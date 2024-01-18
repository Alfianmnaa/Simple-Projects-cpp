#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Variabel untuk loop
string perulangan;

// Fungsi bubble sort
void bubbleSort(vector<string> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika tidak dalam urutan
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi ubah buku
void ubahBuku(vector<string> &database)
{
    do
    {
        system("cls");
        cout << "Ubah data buku" << endl;

        // Menerima judul atau penulis buku yang akan diubah
        string pencarian;
        cout << "\nMasukkan judul atau penulis buku untuk dicari: ";
        cin.ignore();
        getline(cin, pencarian);

        // Pencarian buku dengan algoritma pencarian sekuensial
        bool ditemukan = false;
        for (size_t i = 0; i < database.size(); ++i)
        {
            if (database[i].find(pencarian) != string::npos)
            {
                // Ubah data buku
                string judulBaru, penulisBaru;

                // Menerima judul buku baru
                cout << "Masukkan judul buku baru: ";
                getline(cin, judulBaru);

                // Menerima penulis buku baru
                cout << "Masukkan penulis buku baru: ";
                getline(cin, penulisBaru);
                
                // Menerima data buku baru
                database[i] = judulBaru + " --" + penulisBaru;
                cout << "Data buku telah berhasil diubah\n";
                ditemukan = true;
                break;
            }
        }

        // Buku tidak ditemukan
        if (!ditemukan)
        {
            cout << "Buku tidak ditemukan\n";
        }

        // Ubah buku lagi
        cout << "\nUbah buku lagi? (y/t): ";
        cin >> perulangan;
    } while (perulangan == "y");
}

// Fungsi cari buku
void cariBuku(const vector<string> &database)
{
    do
    {
        system("cls");
        cout << "Cari buku" << endl;

        // Menerima judul atau penulis buku yang dicari
        string pencarian;
        cout << "\nMasukkan judul atau penulis buku untuk dicari: ";
        cin.ignore();
        getline(cin, pencarian);

        // Pencarian buku dengan algoritma pencarian sekuensial
        bool ditemukan = false;
        for (size_t i = 0; i < database.size(); ++i)
        {
            if (database[i].find(pencarian) != string::npos)
            {
                // Menampilkan data buku yang telah ditemukan
                cout << "\nBuku ditemukan: " << database[i] << endl;
                ditemukan = true;
            }
        }

        // Buku tidak ditemukan
        if (!ditemukan)
        {
            cout << "Buku tidak ditemukan\n";
        }

        // Cari buku lagi
        cout << "\nCari buku lagi? (y/t): ";
        cin >> perulangan;
    } while (perulangan == "y");
}


// Fungsi tampilkan semua buku
void tampilkanData(vector<string> &database) {
    do {
        system("cls");

        // Keadaan basis data kosong
        if (database.empty()) {
            cout << "Data buku masih kosong :(\n";
        } else {
            // Urutkan data sebelum menampilkan
            bubbleSort(database);

            cout << "\nDaftar Buku:\n";
            for (size_t i = 0; i < database.size(); ++i) {
                cout << i + 1 << ". " << database[i] << endl;
            }
        }

        // Kembali ke menu utama
        cout << "\nKetik exit untuk kembali ke menu utama : ";
        cin >> perulangan;
    } while (perulangan == "y");
}


// Fungsi tambah buku
void tambahBuku(vector<string> &database)
{
	const int batasMaksimumBuku = 3;
    do
    {
        system("cls");
        cout << "Tambah buku:"
             << endl;
        if (database.size() >= batasMaksimumBuku)
        {
            cout << "\nBatas maksimum buku telah tercapai. ketik y untuk kembali ke menu utama\n";
            cin >> perulangan;
            break; // Keluar dari loop jika batasan tercapai
        }
     
        string bukuBaru;
        string judul, penulis, terbit;

        // Input judul buku
        cout << "\nJudul buku: ";
        cin.ignore();
        getline(cin, judul);

        // Input penulis buku
        cout << "Penulis buku: ";
        getline(cin, penulis);

        cout << "Tahun terbit buku: ";
        getline(cin, terbit);

        // Menggabungkan judul dan penulis menjadi data buku baru
        bukuBaru = judul + " - " + penulis + " - " + terbit;
        database.push_back(bukuBaru);

        // Tambah buku lagi
        cout << "\nBuku berhasil ditambahkan, tambah buku lagi? (y/t): ";
        cin >> perulangan;
    } while (perulangan == "y");
}

// Fungsi hapus buku
void hapusBuku(vector<string> &database) {
    do {
        system("cls");
        cout << "Hapus buku" << endl;

        // Menerima judul atau penulis buku yang akan dihapus
        string pencarian;
        cout << "\nMasukkan judul atau penulis buku untuk dihapus: ";
        cin.ignore();
        getline(cin, pencarian);

        // Pencarian buku dengan algoritma pencarian sekuensial
        bool ditemukan = false;
        for (auto it = database.begin(); it != database.end(); ++it) {
            if (it->find(pencarian) != string::npos) {
                // Hapus data buku
                it = database.erase(it);
                cout << "Buku berhasil dihapus\n";
                ditemukan = true;
                break;
            }
        }

        // Buku tidak ditemukan
        if (!ditemukan) {
            cout << "Buku tidak ditemukan\n";
        }

        // Hapus buku lagi
        cout << "\nHapus buku lagi? (y/t): ";
        cin >> perulangan;
    } while (perulangan == "y");
}

int main() {
    vector<string> database;

    int pilihanMenu;
    do {
        system("cls");
        cout << "\nWizardry Bookself" << endl;
        cout << "Menu Utama" << endl;
        cout << "\n1. Tambah data buku\n2. Cari buku\n3. Ubah data buku\n4. Tampilkan semua buku\n5. Hapus buku\n6. Keluar " << endl;
        cout << "\nPilihan : ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
        case 1:
            tambahBuku(database);
            break;
        case 2:
            cariBuku(database);
            break;
        case 3:
            ubahBuku(database);
            break;
        case 4:
            tampilkanData(database);
            break;
        case 5:
            hapusBuku(database);
            break;
        case 6:
            cout << "\nTerima kasih telah menggunakan Wizardry Bookself :)" << endl;
            break;
        default:
            cout << "\nPilihan tidak valid";
            break;
        }
    } while (pilihanMenu != 6);

    return 0;
}

