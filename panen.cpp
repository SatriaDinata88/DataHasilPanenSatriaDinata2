#include "panen.h"
#include <iostream>

void createList(List &L) {
    L.first = nullptr;
}

address createNewElm(infotype x) {
    address p = new elmList;
    p->info = x;
    p->next = nullptr;
    return p;
}

void tambahData(List &L, infotype x) {
    address p = createNewElm(x);
    if (L.first == nullptr) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

address panenTerbanyak(List L) {
    if (L.first == nullptr) {
        return nullptr;
    }

    address max = L.first;
    address p = L.first->next;

    while (p != nullptr) {
        if (p->info.jumlah > max->info.jumlah) {
            max = p;
        }
        p = p->next;
    }
    return max;
}

void panenBulanan(List L, string bulan) {
    address p = L.first;
    while (p != nullptr) {
        if (p->info.bulan == bulan) {
            cout << p->info.namaTanaman << " ";
        }
        p = p->next;
    }
    cout << endl;
}
