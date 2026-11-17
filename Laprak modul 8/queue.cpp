#include <iostream>
#include <iomanip>
#include "queue.h"

using namespace std;

// Membuat Queue kosong
void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

// Memeriksa Queue kosong
bool isEmptyQueue(Queue Q) {
    return Q.head == -1;
}

// Memeriksa Queue penuh
bool isFullQueue(Queue Q) {
    return (Q.tail + 1) % NMax == Q.head;
}

// Menambahkan elemen ke Queue
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % NMax;
    }

    Q.info[Q.tail] = x;
}

// Menghapus elemen paling depan
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }

    infotype x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = -1;
        Q.tail = -1;
    } else {
        Q.head = (Q.head + 1) % NMax;
    }

    return x;
}

// Menampilkan isi Queue
void printInfo(Queue Q) {
    cout << setw(2) << Q.head << " - "
         << setw(2) << Q.tail << " | ";

    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        int i = Q.head;

        while (true) {
            cout << Q.info[i] << " ";

            if (i == Q.tail) {
                break;
            }

            i = (i + 1) % NMax;
        }
    }

    cout << endl;
}

// Program utama
int main() {
    cout << "Hello World!" << endl;
    cout << "------------------------" << endl;
    cout << "H - T   | Queue Info" << endl;
    cout << "------------------------" << endl;

    Queue Q;

    createQueue(Q);
    printInfo(Q);

    enqueue(Q, 5);
    printInfo(Q);

    enqueue(Q, 2);
    printInfo(Q);

    enqueue(Q, 7);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    enqueue(Q, 4);
    printInfo(Q);

    enqueue(Q, 9);
    printInfo(Q);

    enqueue(Q, 6);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    dequeue(Q);
    printInfo(Q);

    return 0;
}