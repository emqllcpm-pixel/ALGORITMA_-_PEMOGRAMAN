#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    int pilihan = 0;
    string nama_bangun = "";
    int panjang = 0;
    int lebar = 0;
    int tinggi = 0;
    int sisi = 0;
    int cara_input = 0;
    double d = 0;
    double k = 0; //KELILING(k)
    double r = 0; //JARI_JARI(r)
    const double phi = 3.14159;
    double luas_alas = 0;
    double jumlah_luas_sisi_tegak = 0;
    double value = 0, luas_permukaan = 0;
    //tampilan_MENU
    cout << "MENU PILIHAN BANGUN RUANG" << endl;
    cout << "1. balok" << endl;
    cout << "2. kubus" << endl;
    cout << "3. bola" << endl;
    cout << "4. tabung" << endl;
    cout << "5. kerucut" << endl;
    cout << "6. limas_persegi" << endl;
    cout << "masukkann pilihanmu: ";
    cin >> pilihan;
    cout << endl;
    
switch (pilihan) {
    case 1: {
        nama_bangun = "balok";
cout << "panjang";
cin >> panjang;
cout << "lebar";
cin >> lebar;
cout << "tinggi";
cin >> tinggi;
double value = panjang * lebar * tinggi;
double luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
cout << endl;
cout << "nama_bangun" << setw (23) << "panjang" << setw (23) << "lebar" << setw (23) << "tinggi" << setw (23) << "value" << setw (23) << "luas_permukaan" << endl;
cout << " ----------------------------------------------------------------------------------------------" << endl;
cout << left << setw (23) << nama_bangun << setw (23) << panjang << setw (23) << lebar << setw (23) << tinggi << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
break;
}

    case 2: {
            nama_bangun = "kubus";
        cout << "sisi";
        cin >> sisi;
        double value = sisi * sisi * sisi;
        double luas_permukaan = 6 * (sisi * sisi);
        cout << endl;
        cout << "nama_bangun" << setw (23) << "sisi" << setw (23) << "value" << setw (23) << "luas_permukaan" << endl;
        cout << " ----------------------------------------------------------------------------------------------" << endl;
        cout << left << setw (23) << nama_bangun << setw (23) << sisi << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
        break;
    }

case 3: {
        nama_bangun = "bola";
    double d = 0, k = 0;
    cout << "1. keliling (k)" << endl; 
    cout << "2. diameter (d)" << endl;
    cout << "pilih (1/2): ";
    cin >> cara_input;
    if (cara_input ==2) {
cout << "masukkan diameter (d): ";
cin >> d;
r = d/ 2.0;
    } else if (cara_input ==1) {
        cout << "masukkan keliling (k): ";
        cin >> k;
        r = k / (2.0 * phi);
    } else {
        break;
    }
    double value = (4.0 / 3.0) * phi * r * r * r;
    double luas_permukaan = 4.0 * phi * r * r;
    cout << endl;
    cout << "nama_bangun" << setw (23) << "keliling (k)" << setw (23) << "diameter (d)" << setw (23) << "phi" << setw (23) << "value" << setw (23) << "luas_permukaan " << endl;
    cout << " ----------------------------------------------------------------------------------------------" << endl;
    cout << left << setw (23) << nama_bangun << setw (23) << k << setw (23) << d << setw (23) << phi << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
        break;
    }

    case 4: {
            nama_bangun = "tabung";
        cout << "tinggi";
        cin >> tinggi;
        double d = 0, k = 0;
        cout << "1. keliling (k)" << endl;
        cout << "2. diameter (d)" << endl;
        cout << "pilih (1/2): ";
        cin >> cara_input;
        if (cara_input ==2) {
            cout << "masukkan diameter (d): ";
            cin >> d;
            r = d/2;
        } else if (cara_input ==1) {
            cout << "masukkan keliling (k): ";
            cin >> k;
            r = k/(2.0 * phi);
        }else {
            break;
        }
        double value = phi * (r * r) * tinggi;
        double luas_permukaan = 2 * phi * r * (r + tinggi);
        cout << endl;
        cout << "nama_bangun" << setw (23) << "keliling (k)" << setw (23) << "diameter (d)" << setw (23) << "phi" << setw (23) << "value" << setw (23) << "luas_permukaan " << endl;
    cout << " ----------------------------------------------------------------------------------------------" << endl;
    cout << left << setw (23) << nama_bangun << setw (23) << k << setw (23) << d << setw (23) << phi << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
    break;
    }

    case 5: {
            nama_bangun = "kerucut";
        cout << "tinggi";
        cin >> tinggi;
        cout << "sisi";
        cin >> sisi;
        double d = 0, k = 0;
        cout << "1. keliling (k)" << endl;
        cout << "2. diameter (d)" << endl;
        cout << "pilih (1/2): ";
        cin >> cara_input;
        if (cara_input ==2) {
            cout << "masukkan diameter (d): ";
            cin >> d;
            r = 1.0/2.0 * d;
        } else if (cara_input ==1) {
            cout << "masukkan keliling (K): ";
            cin >> k;
            r = k/ (2 * phi);
        }else {
            break;
        }
        double value = 1.0 / 3.0 * phi * (r * r) * tinggi;
        double luas_permukaan = (phi * r * r) + (phi * r * sisi);
        cout << endl;
        cout << "nama_bangun" << setw (23) << "keliling (k)" << setw (23) << "diameter (d)" << setw (23) << "phi" << setw (23) << "value" << setw (23) << "luas_permukaan " << endl;
       cout << " ----------------------------------------------------------------------------------------------" << endl;
        cout << left << setw (23) << nama_bangun << setw (23) << k << setw (23) << d << setw (23) << phi << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
        break;
    }
    
    case 6: {
            nama_bangun = "limas_persegi";
        cout << "panjang";
        cin >> panjang;
        cout << "lebar";
        cin >> lebar;
        cout << "tinggi";
        cin >> tinggi;
        cout << "luas_alas";
        cin >> luas_alas;
        cout << "jumlah_luas_sisi_tegak";
        cin >> jumlah_luas_sisi_tegak;
        double value = 1.0 / 3.0 * panjang * lebar * tinggi;
        double luas_permukaan = luas_alas + jumlah_luas_sisi_tegak;
        cout << endl;
        cout << "nama_bangun" << setw (23) << "panjang" << setw (23) << "lebar" << setw (23) << "tinggi" << setw (23) << "luas_alas" << setw (23) << "jumlah_luas_sisi_tegak" << setw (23) << "value" << setw (23) << "luas_permukaan" << endl;
        cout << " ----------------------------------------------------------------------------------------------" << endl;
        cout << left << setw (23) << nama_bangun << setw (23) << panjang << setw (23) << lebar << setw (23) << tinggi << setw (23) << luas_alas << setw (23) << jumlah_luas_sisi_tegak << setw (23) << fixed << setprecision(5) << value << setw (23) << fixed << setprecision(5) << luas_permukaan << endl;
        break;

    }
    }
        

    return 0;
}