#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

struct pelajaran {
    string namaPel;
    string kodePel;
};

pelajaran create_pelajaran(string namaPel, string kodePel);

void tampil_pelajaran(pelajaran inputPel);

#endif
