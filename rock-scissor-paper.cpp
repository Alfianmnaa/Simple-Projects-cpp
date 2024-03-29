#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// Fungsi untuk menentukan pilihan acak bot
string pilihanBot() {
    int random = rand() % 3;
    if (random == 0) {
        return "batu";
    } else if (random == 1) {
        return "kertas";
    } else {
        return "gunting";
    }
}

// Fungsi untuk menentukan pemenang dari kedua pemain
string menentukanPemenang(string pemain1, string pemain2) {
    if (pemain1 == pemain2) {
        return "Seri!";
    } else if ((pemain1 == "batu" && pemain2 == "gunting") ||
               (pemain1 == "kertas" && pemain2 == "batu") ||
               (pemain1 == "gunting" && pemain2 == "kertas")) {
        return "Anda Menang!";
    } else {
        return "Bot Menang!";
    }
}

// Fungsi untuk menampilkan pesan selama game
void tampilkanPesan(string pesan) {
    cout << "---------------------------\n";
    cout << pesan << endl;
    cout << "---------------------------\n";
}

int main() {
    srand(time(0));

    cout << "Selamat datang di Game Gunting - Batu - Kertas!" << endl;
    
    string jawaban;
    do {
        string pemain1, pemain2;

        cout << "Masukkan pilihan Anda (gunting/batu/kertas): ";
        cin >> pemain1;

        pemain2 = pilihanBot();
        cout << "Bot memilih: " << pemain2 << endl;

        string hasil = menentukanPemenang(pemain1, pemain2);
        tampilkanPesan("Hasil: " + hasil);

        cout << "Main lagi? (ya/tidak): ";
        cin >> jawaban;
    } while (jawaban == "ya");

    return 0;
}

