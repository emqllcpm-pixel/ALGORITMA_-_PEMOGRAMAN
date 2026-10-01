#include <iostream>
#include <string>
using namespace std;

int main() {
    double hadir;
    double total_hari = 5.0; 
    char pilihan;
    
    // mahasiswa dimulai dari absen 1 dan sterusnya
    int i = 1; 

    do {
        cout << "=== DATA MAHASISWA KE-" << i << " ===" << endl;
        cout << "Masukkan jumlah hari kehadiran (0-5): ";
        cin >> hadir;

        if (hadir < 0 || hadir > 5) { //biar ngk eror
            cout << "MASUKIN ANGKA YANG BENAR 0-5." << endl;
            cout << "---------------------------------------" << endl;
            continue; 
        }

        // Menghitung persentase
        double persentase = (hadir / total_hari) * 100.0;
        string status;

        if (persentase > 75) {
            status = "Kehadiran Baik";
        } else if (persentase >= 50 && persentase <= 75) {
            status = "Kehadiran Cukup";
        } else {
            status = "Kehadiran Kurang";
        }

        // Menampilkan hasil
        cout << "Persentase Kehadiran : " << persentase << "%" << endl;
        cout << "Status Kehadiran     : " << status << endl;
        cout << "---------------------------------------" << endl;

        // Opsi untuk melanjutkan
        cout << "Memasukkan Data Mahasiswa Lagi?, Ketik (y/n): ";
        cin >> pilihan;
        cout << endl;

        if (pilihan == 'y' || pilihan == 'Y') {
            i++;
        }

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Terima kasih!" << endl;

    return 0;
}

/*=== DATA MAHASISWA KE-1 ===
Masukkan jumlah hari kehadiran (0-5): 1
Persentase Kehadiran : 20%
Status Kehadiran     : Kehadiran Kurang
---------------------------------------
Memasukkan Data Mahasiswa Lagi?, Ketik (y/n): y

=== DATA MAHASISWA KE-2 ===
Masukkan jumlah hari kehadiran (0-5): 4
Persentase Kehadiran : 80%
Status Kehadiran     : Kehadiran Baik
---------------------------------------
Memasukkan Data Mahasiswa Lagi?, Ketik (y/n): n

Terima kasih!*/