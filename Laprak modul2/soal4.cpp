#include <iostream>
using namespace std;

// Prosedur untuk menukar dan mengalikan nilai
void proses(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    x = x * 10;
    y = y * 10;
}

int main() {
    int x, y;

    cin >> x >> y;

    proses(x, y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}