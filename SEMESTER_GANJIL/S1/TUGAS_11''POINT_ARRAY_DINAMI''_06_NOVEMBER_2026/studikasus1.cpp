#include <iostream>
using namespace std;

// menjumlahkan nilai dari belakang secara rekursif
double jumlahRekursif(int* nilai, int n) {
    if (n == 0) return 0;
    return nilai[n - 1] + jumlahRekursif(nilai, n - 1);
}

double rataRata(int* nilai, int n) {
    return jumlahRekursif(nilai, n) / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah mahasiswa tidak valid, tidak ada data yang diproses." << endl;
        return 0;
    }

    int* nilai = new int[n];
    cout << "Masukkan nilai mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    int terbesar = nilai[0];
    int terkecil = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > terbesar) terbesar = nilai[i];
        if (nilai[i] < terkecil) terkecil = nilai[i];
    }

    cout << "Nilai terbesar: " << terbesar << endl;
    cout << "Nilai terkecil: " << terkecil << endl;
    cout << "Rata-rata nilai: " << rataRata(nilai, n) << endl;

    delete[] nilai;
    return 0;
}