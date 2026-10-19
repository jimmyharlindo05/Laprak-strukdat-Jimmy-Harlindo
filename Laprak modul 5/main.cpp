
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    cout << "Isi linked list: ";
    printInfo(L);

    address P = findElm(L, 8);

    if (P != NULL) {
        cout << P->info << " ditemukan dalam list" << endl;
    } else {
        cout << "Elemen tidak ditemukan dalam list" << endl;
    }

    cout << "Total info dari kelima elemen adalah "
         << sumInfo(L) << endl;

    while (L.First != NULL) {
        address temp = L.First;
        L.First = L.First->next;
        dealokasi(temp);
    }

    return 0;
}
