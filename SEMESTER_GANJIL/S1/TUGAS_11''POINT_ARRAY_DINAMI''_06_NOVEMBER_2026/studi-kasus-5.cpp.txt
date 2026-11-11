
#include <iostream>
#include <string>
using namespace std;

int input_n();

int main() {
    int n;

    do {
        n = input_n();

        if (n <= 0) {
            cout << "WARNING! Jumlah harus lebih dari 0. Input ulang!" << endl;
        }
    } while (n <= 0);

    string* nama = new string[n];
    double* harga = new double[n];
    int* jumlah = new int[n];

    cout << "\nMasukan Data Produk (Nama Produk, Harga Satuan, Jumlah Terjual)" << endl;

    double total = 0;
    double tertinggi = 0;
    int posisi = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nProduk ke-" << i + 1 << endl;

        cout << "Nama: ";
        cin >> nama[i];

        cout << "Harga: ";
        cin >> harga[i];

        cout << "Jumlah terjual: ";
        cin >> jumlah[i];

        double pendapatan = harga[i] * jumlah[i];

        total += pendapatan;

        if (i == 0 || pendapatan > tertinggi) {
            tertinggi = pendapatan;
            posisi = i;
        }
    }

    cout << "\nTotal pendapatan: Rp " << total << endl;
    cout << "Rata-rata pendapatan per produk: Rp " << total / n << endl;

    cout << "Pendapatan tertinggi: " << nama[posisi]
         << " (Rp " << tertinggi << ")" << endl;

    delete[] nama;
    delete[] harga;
    delete[] jumlah;

    return 0;
}

int input_n() {
    int n;

    cout << string(30, '-') << endl;
    cout << "Masukan Jumlah Produk: ";
    cin >> n;

    return n;
}
