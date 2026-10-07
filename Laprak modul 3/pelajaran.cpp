#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string namaPel, string kodePel) {
    pelajaran pel;

    pel.namaPel = namaPel;
    pel.kodePel = kodePel;

    return pel;
}

void tampil_pelajaran(pelajaran inputPel) {
    cout << "nama pelajaran : " << inputPel.namaPel << endl;
    cout << "nilai          : " << inputPel.kodePel << endl;
}
