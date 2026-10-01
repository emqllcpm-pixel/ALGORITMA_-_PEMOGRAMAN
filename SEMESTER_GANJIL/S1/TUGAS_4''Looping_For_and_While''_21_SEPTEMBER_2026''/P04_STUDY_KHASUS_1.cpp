#include <iostream>
#include <iomanip>
using namespace std;
int main () {
int pilihanUlang;

do {
    int jumlahBarang;
        double totalHarga = 0;
        double diskon = 0;
        double totalSetelahDiskon = 0;
    cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

    for (int i = 1; i <= jumlahBarang; i++) {
            double harga;
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> harga;
            
            // Menjumlahkan semua harga barang yang diinput ke variabel totalHarga
            totalHarga += harga;
        }
// 3. LOGIKA DISKON: 
        // Berdasarkan gambar: Total 450.000 dapat diskon 22.500 (5%), sedangkan Total 120.000 diskon 0.
        // Di sini kita buat asumsi jika total belanja >= Rp 200.000, maka mendapat diskon 5%.
        // (Kamu bisa ganti angka 200000 di bawah ini sesuai dengan aturan soal aslimu).
        if (totalHarga >= 200000) {
            diskon = 0.05 * totalHarga; // Diskon 5%
        } else {
            diskon = 0; // Tidak dapat diskon
        }

        // Menghitung total akhir setelah dipotong diskon
        totalSetelahDiskon = totalHarga - diskon;

        // 4. FORMAT OUTPUT: Mengunci angka agar selalu menampilkan dua desimal (.00)
        cout << fixed << setprecision(2);

        // Menampilkan hasil kalkulasi belanjaan ke layar
        cout << "Total Harga: Rp " << totalHarga << endl;
        cout << "Diskon: Rp " << diskon << endl;
        cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << endl;

        // 5. KONFIRMASI ULANG: Menanyakan user apakah ingin mengulang dari awal
        cout << "Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihanUlang;
        cout << endl;

    } while (pilihanUlang == 1); // Jika mengetik 1, program akan bersih dan mulai dari nol lagi

    return 0;
}
/*Masukkan jumlah barang: 3
Masukkan harga barang ke-1: Rp 300000
Masukkan harga barang ke-2: Rp 100000
Masukkan harga barang ke-3: Rp 50000
Total Harga: Rp 450000.00
Diskon: Rp 22500.00
Total Setelah Diskon: Rp 427500.00
Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): 1

Masukkan jumlah barang: 2
Masukkan harga barang ke-1: Rp 100000
Masukkan harga barang ke-2: Rp 20000
Total Harga: Rp 120000.00
Diskon: Rp 0.00
Total Setelah Diskon: Rp 120000.00
Ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu untuk tidak): 2
*/
