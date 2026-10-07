#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {

    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int *p1 = &array1[0][0];
    int *p2 = &array2[0][0];

    cout << "=== ARRAY SEBELUM DITUKAR ===" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray(array1);

    cout << "\nArray 2:" << endl;
    tampilArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\n=== SETELAH MENUKAR POSISI [1][1] ===" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray(array1);

    cout << "\nArray 2:" << endl;
    tampilArray(array2);

    cout << "\n=== MENUKAR NILAI DENGAN POINTER ===" << endl;

    cout << "Sebelum ditukar:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\nSetelah ditukar:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    return 0;
}