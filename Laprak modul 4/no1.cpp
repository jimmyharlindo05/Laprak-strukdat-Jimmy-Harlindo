
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

// Deklarasi fungsi
void tampilkanAntrean();

void insertLast(string nama) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->next = nullptr;

    if (head == nullptr) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }

    tampilkanAntrean();
}

void deleteFirst() {
    if (head == nullptr) {
        cout << "Antrean kosong!" << endl;
        return;
    }

    Node* hapus = head;
    cout << "Melayani: " << hapus->nama << endl;

    head = head->next;

    if (head == nullptr) {
        tail = nullptr;
    }

    delete hapus;
    tampilkanAntrean();
}

void tampilkanAntrean() {
    cout << "Antrean: ";

    if (head == nullptr) {
        cout << "Kosong";
    } else {
        Node* bantu = head;

        while (bantu != nullptr) {
            cout << bantu->nama;

            if (bantu->next != nullptr) {
                cout << " -> ";
            }

            bantu = bantu->next;
        }
    }

    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n=== ANTREAN NASABAH BANK ===" << endl;
        cout << "1. Tambah nasabah" << endl;
        cout << "2. Layani nasabah" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama nasabah: ";
                getline(cin, nama);
                insertLast(nama);
                break;

            case 2:
                deleteFirst();
                break;

            case 3:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);

    while (head != nullptr) {
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }

    tail = nullptr;

    return 0;
}
