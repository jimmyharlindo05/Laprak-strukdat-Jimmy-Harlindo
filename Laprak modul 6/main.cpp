
#include <iostream>
#include <string>
#include "Doublylist.h"
using namespace std;

int main() {
    List L;
    infotype x, xCari;
    address P, Q;
    string ulang;

    CreateList(L);

    do {
        cout << "masukkan nomor polisi: ";
        cin >> x.nopol;

        cout << "masukkan warna kendaraan: ";
        cin >> x.warna;

        cout << "masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        Q = findElm(L, x);

        if (Q != nullptr) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            P = alokasi(x);
            insertLast(L, P);
        }

        cout << endl;
        cout << "Tambah data lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == "y" || ulang == "Y");

    cout << "Masukkan Nomor Polisi yang akan dihapus   : ";
    cin >> xCari.nopol;

    P = findElm(L, xCari);

    if (P != nullptr) {
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            Q = P->prev;
            deleteAfter(Q, P);
        }

        dealokasi(P);
        cout << "Data dengan nomor polisi "
             << xCari.nopol
             << " berhasil dihapus." << endl;
    } else {
        cout << "Data dengan nomor polisi "
             << xCari.nopol
             << " tidak ditemukan." << endl;
    }

    cout << "\nDATA LIST 1\n\n";
    printInfo(L);

    while (L.First != nullptr) {
        deleteFirst(L, P);
        dealokasi(P);
    }

    return 0;
}
