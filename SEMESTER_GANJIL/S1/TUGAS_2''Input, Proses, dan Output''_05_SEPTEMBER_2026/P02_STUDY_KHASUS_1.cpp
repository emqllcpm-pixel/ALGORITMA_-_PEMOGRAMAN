#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {

    string Nama_Karyawan;
    int Jam_Kerja;
    int Tarif_Perjam;
   
//untuk memasukkan input data
    cout << "Nama_Karyawan :";
    getline (cin, Nama_Karyawan);

    cout << "Jam_Kerja :";
    cin >> Jam_Kerja;

    cout << "Tarif_Perjam :";
    cin >> Tarif_Perjam;

     int Gaji_Total = Jam_Kerja * Tarif_Perjam;
cout << endl;
//menampilkan_fariable_input_data
cout << left << setw (35) << "Nama_Karyawan" << setw (35) << "Jam_Kerja" << setw (35) << "Tarif_Per_Jam" << setw (35) << "Gaji_Total" << endl;
cout << "" << endl;
//menampilkan_fariable_output_data
cout << left << setw (35) << Nama_Karyawan << setw (35) << Jam_Kerja << setw (35) << Tarif_Perjam << setw (35) << Gaji_Total << endl;
return 0;
}
