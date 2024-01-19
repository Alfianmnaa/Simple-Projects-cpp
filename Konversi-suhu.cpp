#include <iostream>
#include <iomanip> // Untuk mengatur presisi angka desimal
using namespace std;

// Fungsi untuk mengonversi suhu dari Celsius ke Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Fungsi untuk mengonversi suhu dari Celsius ke Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Fungsi untuk mengonversi suhu dari Celsius ke Reamur
double celsiusToReamur(double celsius) {
    return celsius * 4 / 5;
}

int main() {
    // Menampilkan judul program
    cout << "=== Konversi Suhu ===" << endl;

    double celsius;

    // Input suhu dalam Celsius dari pengguna
    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;

    // Konversi ke Fahrenheit, Kelvin, dan Reamur
    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin = celsiusToKelvin(celsius);
    double reamur = celsiusToReamur(celsius);

    // Menampilkan hasil konversi dengan pewarnaan dan pemformatan
    cout << fixed << setprecision(2); // Mengatur presisi angka desimal
    cout << "\nHasil Konversi:" << endl;
    cout << "-----------------------------" << endl;
    cout << "Fahrenheit: " << fahrenheit << " derajat F" << endl;
    cout << "Kelvin     : " << kelvin << " K" << endl;
    cout << "Reamur     : " << reamur << " derajat Re" << endl;
    cout << "-----------------------------" << endl;

    return 0;
}

