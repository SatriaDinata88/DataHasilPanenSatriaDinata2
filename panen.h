#ifndef PANEN_H_INCLUDED
#define PANEN_H_INCLUDED

#include <string>
using namespace std;

struct tPanen {
    string namaTanaman;
    string bulan;
    int jumlah;
};

typedef tPanen infotype;

struct elmList;
typedef elmList* address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address createNewElm(infotype x);
void tambahData(List &L, infotype x);
address panenTerbanyak(List L);
void panenBulanan(List L, string bulan);

#endif // PANEN_H_INCLUDED
