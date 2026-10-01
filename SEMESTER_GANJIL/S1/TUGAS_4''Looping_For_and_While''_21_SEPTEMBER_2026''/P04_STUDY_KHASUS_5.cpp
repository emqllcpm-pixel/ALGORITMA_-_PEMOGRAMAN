#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main () {
int pilihanUlang;

do {
    double totalmakanan = 0;
    double totaltransportasi = 0;
    double totalhiburan = 0;
    double totallainnya = 0;
    double totalseminggu = 0;
    double pengeluaranterbesar= 0;
    string kategoriterbesar = "";
    for (int i = 1; i <= 7; i++) {
    string kategori;
    double jumlah;

    cout << "masukkan aktegori pengeluaran hari ke-" << i << " (makanan/transportasi/hiburan/lain-lain): "; 
    cin >> kategori;
    cout << "masukkan jumlah pengeluaran RP ";
    cin >> jumlah;

    if (kategori == "makanan") {
        totalmakanan += jumlah;
    } else if (kategori == "transportasi") {
        totalmakanan += jumlah;
    } else if (kategori == "hiburan") {
        totalmakanan += jumlah;
    } else {
        // Jika input selain 3 di atas (misal diinput "Kuota"), otomatis masuk ke Lainnya
        totallainnya += jumlah;
    }
    if (jumlah > pengeluaranterbesar) {
        pengeluaranterbesar = jumlah;
        kategoriterbesar = kategori;
    }

}
totalseminggu = totalmakanan + totaltransportasi + totalhiburan + totallainnya;
cout << fixed << setprecision(2);

cout << "\nTotal Pengeluaran Makanan: RP" << totalmakanan << endl;
cout << "Total Pengeluaran Transportasi: RP" << totaltransportasi << endl;
cout << "Total Pengeluaran Hiburan: RP" << totalhiburan << endl;
cout << "Total Pengeluaran Lainnya: RP" << totallainnya << endl;
cout << "Total Pengeluaran Selama Seminggu: RP" << totalseminggu << endl;
cout << "Total Pengeluaran Terbesar: RP" << pengeluaranterbesar << "pada kategori" << kategoriterbesar << endl;
cout << "\ningin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): ";
cin >> pilihanUlang;
cout << endl;
} while (pilihanUlang == 1);
return 0;
}

/*masukkan aktegori pengeluaran hari ke-1 (makanan/transportasi/hiburan/lain-lain): makanan
masukkan jumlah pengeluaran RP 10000
masukkan aktegori pengeluaran hari ke-2 (makanan/transportasi/hiburan/lain-lain): makanan
masukkan jumlah pengeluaran RP 30000
masukkan aktegori pengeluaran hari ke-3 (makanan/transportasi/hiburan/lain-lain): hiburan
masukkan jumlah pengeluaran RP 10000
masukkan aktegori pengeluaran hari ke-4 (makanan/transportasi/hiburan/lain-lain): transportasi
masukkan jumlah pengeluaran RP 20000
masukkan aktegori pengeluaran hari ke-5 (makanan/transportasi/hiburan/lain-lain): makanan
masukkan jumlah pengeluaran RP 10000
masukkan aktegori pengeluaran hari ke-6 (makanan/transportasi/hiburan/lain-lain): makanan
masukkan jumlah pengeluaran RP 150000
masukkan aktegori pengeluaran hari ke-7 (makanan/transportasi/hiburan/lain-lain): kuota
masukkan jumlah pengeluaran RP 50000

Total Pengeluaran Makanan: RP230000.00
Total Pengeluaran Transportasi: RP0.00
Total Pengeluaran Hiburan: RP0.00
Total Pengeluaran Lainnya: RP50000.00
Total Pengeluaran Selama Seminggu: RP280000.00
Total Pengeluaran Terbesar: RP150000.00pada kategorimakanan

ingin mencatat pengeluaran untuk minggu lain? (1 untuk ya, selain itu untuk tidak): 2*/