#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int nilai[N];
    int total = 0;

    // Input nilai mahasiswa
    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    // Menghitung rata-rata dan dibulatkan ke bawah
    int rataRata = total / N;

    // Menghitung mahasiswa di atas rata-rata
    int jumlah = 0;
    for (int i = 0; i < N; i++) {
        if (nilai[i] > rataRata) {
            jumlah++;
        }
    }

    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << jumlah << endl;

    return 0;
}