#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
    }
    else if (angka == 0) {
        cout << "Nol" << endl;
    }
    else if (angka == 100) {
        cout << "Seratus" << endl;
    }
    else if (angka < 10) {
        string satuan[] = {
            "Nol", "Satu", "Dua", "Tiga", "Empat",
            "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"
        };

        cout << satuan[angka] << endl;
    }
    else if (angka < 20) {
        string belasan[] = {
            "", "", "Dua Belas", "Tiga Belas", "Empat Belas",
            "Lima Belas", "Enam Belas", "Tujuh Belas",
            "Delapan Belas", "Sembilan Belas"
        };

        if (angka == 10)
            cout << "Sepuluh" << endl;
        else if (angka == 11)
            cout << "Sebelas" << endl;
        else
            cout << belasan[angka - 10] << endl;
    }
    else {
        string satuan[] = {
            "", "Satu", "Dua", "Tiga", "Empat",
            "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"
        };

        int puluhan = angka / 10;
        int satu = angka % 10;

        cout << satuan[puluhan] << " Puluh";

        if (satu != 0)
            cout << " " << satuan[satu];

        cout << endl;
    }

    return 0;
}