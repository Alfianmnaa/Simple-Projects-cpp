#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    float saldo;
    string pin;

public:
    ATM() : saldo(1000.0), pin("1234") {} // constructor

    void cekSaldo() {
        cout << "Saldo Anda: $" << saldo << endl;
    }

    void tarikUang() {
        float jumlah;
        cout << "Masukkan jumlah yang ingin ditarik: $";
        cin >> jumlah;

        if (jumlah > saldo) {
            cout << "Saldo tidak mencukupi.\n";
        } else {
            saldo -= jumlah;
            cout << "Penarikan sukses! Saldo sekarang: $" << saldo << endl;
        }
    }

    void setorUang() {
        float jumlah;
        cout << "Masukkan jumlah yang ingin disetor: $";
        cin >> jumlah;

        saldo += jumlah;
        cout << "Penyetoran sukses! Saldo sekarang: $" << saldo << endl;
    }

    bool cekPin(string inputPin) {
        return pin == inputPin;
    }
};

int main() {
    ATM atm;
    string pin;
    int pilihan;

    cout << "Selamat datang di mesin ATM!\n";
    cout << "Masukkan PIN Anda: ";
    cin >> pin;

    if (!atm.cekPin(pin)) {
        cout << "PIN salah. Program berhenti.\n";
        return 0;
    }

    do {
        cout << "\n===== Menu =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Tarik Uang\n";
        cout << "3. Setor Uang\n";
        cout << "4. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            atm.cekSaldo();
            break;
        case 2:
            atm.tarikUang();
            break;
        case 3:
            atm.setorUang();
            break;
        case 4:
            cout << "Terima kasih telah menggunakan mesin ATM ini. Selamat tinggal!\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
        }

    } while (pilihan != 4);

    return 0;
}

