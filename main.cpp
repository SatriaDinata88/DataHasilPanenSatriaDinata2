#include <iostream>
#include "panen.h"

using namespace std;

int main() {
    List L;
    L.first = nullptr;

    int n;
    infotype x;

    cout << "Masukkan jumlah data panen: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData ke-" << i + 1 << endl;

        cout << "Nama tanaman  : ";
        cin >> x.namaTanaman;

        cout << "Bulan panen   : ";
        cin >> x.bulan;

        cout << "Jumlah panen (kg): ";
        cin >> x.jumlah;

        tambahData(L, x);
    }

    string bulanCari;
    cout << "\nMasukkan bulan yang ingin ditampilkan: ";
    cin >> bulanCari;

    cout << "Tanaman yang dipanen pada bulan " << bulanCari << ": ";
    panenBulanan(L, bulanCari);

    address max = panenTerbanyak(L);
    if (max != nullptr) {
        cout << "\nPanen terbanyak:" << endl;
        cout << "Nama tanaman : " << max->info.namaTanaman << endl;
        cout << "Bulan        : " << max->info.bulan << endl;
        cout << "Jumlah       : " << max->info.jumlah << " kg" << endl;
    }

    return 0;
}
