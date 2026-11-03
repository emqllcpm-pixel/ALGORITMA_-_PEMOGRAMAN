#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
//dikasif diff,arr karna perintah soal
vector<double> diff(const vector<double>& arr) {
    vector<double> result;
    if (arr.size() <= 1) return result;
    
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        result.push_back(arr[i + 1] - arr[i]); // Selisih antar data
    }
    return result;
}

int main() {
    //s(t) = t^4 untuk t = 0,1-6
    vector<double> t_val = {0, 1, 2, 3, 4, 5, 6};
    vector<double> s;
    for (double t : t_val) {
        s.push_back(pow(t, 4));
    }

    // WAJIB: Terapkan dua kali
    vector<double> ds = diff(s);   // Penerapan pertama karna Menghasilkan turunan pertama, yaitu data Kecepatan s^1 atau v. Fungsi ini mengukur seberapa cepat posisi benda berubah.
    vector<double> d2s = diff(ds); // Penerapan kedua karena 1. Menghasilkan turunan kedua dari posisi, yaitu data Percepatan S^2 atau a. Fungsi ini mengukur seberapa cepat kecepatan benda berubah.


    // ini tabel hasil
    cout << left << setw(6) << "t" 
         << setw(20) << "s\"(t) Numerik" 
         << setw(20) << "s\"(t) Analitis" 
         << "Selisih (Error)\n";
    cout << "---------------------------------------------------------\n";

    for (size_t i = 0; i < d2s.size(); ++i) {
        double t = t_val[i];
        double numerik = d2s[i];
        double analitis = 12.0 * pow(t, 2);
        double error = abs(numerik - analitis);

        cout << left << setw(6) << t 
             << setw(20) << numerik 
             << setw(20) << analitis 
             << error << "\n";
    }

    return 0;
}
/*t     s"(t) Numerik       s"(t) Analitis      Selisih (Error)
---------------------------------------------------------
0     14                  0                   14
1     50                  12                  38
2     110                 48                  62
3     194                 108                 86
4     302                 192                 110*/