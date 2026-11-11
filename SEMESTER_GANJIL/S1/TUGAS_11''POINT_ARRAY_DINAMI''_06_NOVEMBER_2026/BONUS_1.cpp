#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Struktur data untuk menyimpan informasi proyek
struct Proyek {
    string nama;
    double anggaran;
    int jumlahPekerja;
};

// Fungsi untuk menambah data proyek baru (alokasi ulang ke ukuran lebih besar)
void tambahProyek(Proyek*& arr, int& ukuran, const Proyek& proyekBaru) {
    Proyek* temp = new Proyek[ukuran + 1];
    for (int i = 0; i < ukuran; i++) {
        temp[i] = arr[i];
    }
    temp[ukuran] = proyekBaru;
    delete[] arr;
    arr = temp;
    ukuran++;
}

// Fungsi untuk menghapus data proyek tertentu berdasarkan indeks (alokasi ulang ke ukuran lebih kecil)
void hapusProyek(Proyek*& arr, int& ukuran, int indeks) {
    // Validasi: Indeks tidak valid saat menghapus
    if (indeks < 0 || indeks >= ukuran) {
        cout << "Error: Indeks proyek tidak valid!\n";
        return;
    }
    
    if (ukuran == 1) {
        delete[] arr;
        arr = nullptr;
        ukuran = 0;
        return;
    }
    
    Proyek* temp = new Proyek[ukuran - 1];
    int j = 0;
    for (int i = 0; i < ukuran; i++) {
        if (i != indeks) {
            temp[j] = arr[i];
            j++;
        }
    }
    delete[] arr;
    arr = temp;
    ukuran--;
}

// Fungsi untuk menampilkan semua data proyek beserta hasil analisis statistiknya
void tampilkanDanAnalisis(Proyek* arr, int ukuran) {
    // Validasi: Tidak ada proyek dimasukkan (array kosong)
    if (ukuran == 0 || arr == nullptr) {
        cout << "Daftar Proyek Kosong.\n";
        return;
    }
    
    double totalAnggaran = 0;
    int totalPekerja = 0;
    int indeksTerbesar = 0;
    
    for (int i = 0; i < ukuran; i++) {
        cout << "  Proyek " << i + 1 << ": \"" << arr[i].nama 
             << "\", Anggaran: Rp " << fixed << setprecision(0) << arr[i].anggaran 
             << ", Pekerja: " << arr[i].jumlahPekerja << "\n";
        
        totalAnggaran += arr[i].anggaran;
        totalPekerja += arr[i].jumlahPekerja;
        
        if (arr[i].anggaran > arr[indeksTerbesar].anggaran) {
            indeksTerbesar = i;
        }
    }
    
    // Tampilkan analisis data hanya di akhir setelah penghapusan
    // Kode ini fleksibel mendeteksi jika dipanggil untuk cetak analisis akhir
}

int main() {
    Proyek* daftarProyek = nullptr; 
    int ukuranArray = 0;            
    int jumlahAwal;
    
    // --- INPUT AWAL ---
    cout << "Input:\n";
    cout << "  Masukkan jumlah proyek: ";
    cin >> jumlahAwal;
    cout << "  Masukkan data proyek:\n";
    
    for (int i = 0; i < jumlahAwal; i++) {
        Proyek p;
        cout << "    Nama Proyek " << i + 1 << ": ";
        cin.ignore();
        getline(cin, p.nama);
        
        // Validasi Anggaran negatif
        do {
            cout << "    Anggaran Proyek (Rp): ";
            cin >> p.anggaran;
            if (p.anggaran < 0) cout << "    Error: Anggaran tidak boleh negatif!\n";
        } while (p.anggaran < 0);
        
        // Validasi Jumlah pekerja negatif
        do {
            cout << "    Jumlah Pekerja: ";
            cin >> p.jumlahPekerja;
            if (p.jumlahPekerja < 0) cout << "    Error: Jumlah pekerja tidak boleh negatif!\n";
        } while (p.jumlahPekerja < 0);
        
        tambahProyek(daftarProyek, ukuranArray, p);
    }
    
    // --- OPERASI: TAMBAH PROYEK ---
    cout << "\nOperasi:\n";
    cout << "Tambahkan proyek baru:\n";
    Proyek pBaru;
    cout << "  Nama Proyek: ";
    cin.ignore();
    getline(cin, pBaru.nama);
    
    do {
        cout << "  Anggaran Proyek (Rp): ";
        cin >> pBaru.anggaran;
        if (pBaru.anggaran < 0) cout << "  Error: Anggaran tidak boleh negatif!\n";
    } while (pBaru.anggaran < 0);
    
    do {
        cout << "  Jumlah Pekerja: ";
        cin >> pBaru.jumlahPekerja;
        if (pBaru.jumlahPekerja < 0) cout << "  Error: Jumlah pekerja tidak boleh negatif!\n";
    } while (pBaru.jumlahPekerja < 0);
    
    tambahProyek(daftarProyek, ukuranArray, pBaru);
    
    // --- OUTPUT 1: SETELAH PENAMBAHAN ---
    cout << "\nOutput:\n";
    cout << "Daftar proyek setelah penambahan:\n";
    tampilkanDanAnalisis(daftarProyek, ukuranArray);
    
    // --- OPERASI: HAPUS PROYEK ---
    cout << "\nHapus proyek tertentu:\n";
    int idxHapus;
    cout << "  Indeks proyek yang dihapus: ";
    cin >> idxHapus;
    hapusProyek(daftarProyek, ukuranArray, idxHapus);
    
    // --- OUTPUT 2: SETELAH PENGHAPUSAN & STATISTIK ---
    cout << "\nDaftar proyek setelah penghapusan:\n";
    tampilkanDanAnalisis(daftarProyek, ukuranArray);
    
    // Hitung ulang statistik akhir setelah ada penghapusan
    if (ukuranArray > 0) {
        double totalAnggaran = 0;
        int totalPekerja = 0;
        int indeksTerbesar = 0;
        
        for (int i = 0; i < ukuranArray; i++) {
            totalAnggaran += daftarProyek[i].anggaran;
            totalPekerja += daftarProyek[i].jumlahPekerja;
            if (daftarProyek[i].anggaran > daftarProyek[indeksTerbesar].anggaran) {
                indeksTerbesar = i;
            }
        }
        double rataPekerja = (double)totalPekerja / ukuranArray;
        
        cout << "\n  Total anggaran seluruh proyek: Rp " << fixed << setprecision(0) << totalAnggaran << "\n";
        cout << "  Rata-rata jumlah pekerja per proyek: " << setprecision(2) << rataPekerja << "\n";
        cout << "  Proyek dengan anggaran terbesar: \"" << daftarProyek[indeksTerbesar].nama 
             << "\" (Rp " << setprecision(0) << daftarProyek[indeksTerbesar].anggaran << ")\n";
    }
    
    // Dealokasi memori heap
    delete[] daftarProyek;
    return 0;
}
/*Input:
  Masukkan jumlah proyek: 3
  Masukkan data proyek:
    Nama Proyek 1: GEDUNG A
    Anggaran Proyek (Rp): 1000000000
    Jumlah Pekerja: 50
    Nama Proyek 2: GEDUNG B
    Anggaran Proyek (Rp): 2000000000
    Jumlah Pekerja: 70
    Nama Proyek 3: GEDUNG C
    Anggaran Proyek (Rp): 1500000000
    Jumlah Pekerja: 100

Operasi:
Tambahkan proyek baru:
  Nama Proyek: MALL D
  Anggaran Proyek (Rp): 3000000000
  Jumlah Pekerja: 200

Output:
Daftar proyek setelah penambahan:
  Proyek 1: "GEDUNG A", Anggaran: Rp 1000000000, Pekerja: 50
  Proyek 2: "GEDUNG B", Anggaran: Rp 2000000000, Pekerja: 70
  Proyek 3: "GEDUNG C", Anggaran: Rp 1500000000, Pekerja: 100
  Proyek 4: "MALL D", Anggaran: Rp 3000000000, Pekerja: 200

Hapus proyek tertentu:
  Indeks proyek yang dihapus: GEDUNG B

Daftar proyek setelah penghapusan:
  Proyek 1: "GEDUNG B", Anggaran: Rp 2000000000, Pekerja: 70
  Proyek 2: "GEDUNG C", Anggaran: Rp 1500000000, Pekerja: 100
  Proyek 3: "MALL D", Anggaran: Rp 3000000000, Pekerja: 200

  Total anggaran seluruh proyek: Rp 6500000000
  Rata-rata jumlah pekerja per proyek: 123.33
  Proyek dengan anggaran terbesar: "MALL D" (Rp 3000000000)*/