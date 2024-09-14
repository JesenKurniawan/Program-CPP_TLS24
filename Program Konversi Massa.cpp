#include <iostream>
#include <iomanip> // Library untuk pengaturan presisi output
using namespace std;

// Fungsi untuk mengonversi satuan massa
void konversiMassa(float input, string dariSatuan, string keSatuan) {
    float hasil = 0;

    // Mengonversi input ke kilogram sebagai dasar perhitungan
    if (dariSatuan == "kg") {
        hasil = input;
    } else if (dariSatuan == "gram") {
        hasil = input / 1000; // 1 gram = 0.001 kg
    } else if (dariSatuan == "pounds") {
        hasil = input / 2.20462; // 1 pound = 0.453592 kg
    } else if (dariSatuan == "ons") {
        hasil = input / 35.274; // 1 ons = 0.0283495 kg
    } else {
        cout << "Satuan tidak valid.\n";
        return;
    }

    // Menampilkan hasil dengan format presisi 2 angka di belakang koma
    cout << fixed << setprecision(2); // Mengatur agar hasil memiliki 2 angka desimal

    // Mengonversi dari kilogram ke satuan yang diinginkan
    if (keSatuan == "kg") {
        cout << input << " " << dariSatuan << " = " << hasil << " kg\n";
    } else if (keSatuan == "gram") {
        cout << input << " " << dariSatuan << " = " << hasil * 1000 << " gram\n";
    } else if (keSatuan == "pounds") {
        cout << input << " " << dariSatuan << " = " << hasil * 2.20462 << " pounds\n";
    } else if (keSatuan == "ons") {
        cout << input << " " << dariSatuan << " = " << hasil * 35.274 << " ons\n";
    } else {
        cout << "Satuan tidak valid.\n";
    }
}

int main() {
    float input;
    string dariSatuan, keSatuan;

    // Input dari pengguna
    cout << "Masukkan nilai massa: ";
    cin >> input;
    cout << "Masukkan satuan asal (kg, gram, pounds, ons): ";
    cin >> dariSatuan;
    cout << "Masukkan satuan tujuan (kg, gram, pounds, ons): ";
    cin >> keSatuan;

    // Memanggil fungsi konversi
    konversiMassa(input, dariSatuan, keSatuan);

    return 0;
}
