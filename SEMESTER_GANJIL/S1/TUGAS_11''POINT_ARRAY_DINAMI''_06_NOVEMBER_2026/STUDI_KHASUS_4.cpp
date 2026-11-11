#include <iostream>
using namespace std;


double hitungTotal(double* h, int n, int i = 0) {
    if (i >= n) return 0;
    double d = (h[i] > 500000) ? 0.10 : ((h[i] > 100000) ? 0.05 : 0.0);
    return (h[i] * (1 - d)) + hitungTotal(h, n, i + 1);
}


int main() {
    int n;
    cout << "Masukkan jumlah barang: ";
    cin >> n;
    double* h = new double[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> h[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Diskon untuk barang " << i + 1 << ": ";
        if (h[i] > 500000) cout << "10%" << endl;
        else if (h[i] > 100000) cout << "5%" << endl;
        else cout << "Tidak ada diskon" << endl;
    }
    cout << "Total harga setelah diskon: " << hitungTotal(h, n) << endl;
    delete[] h;
    return 0;
}
