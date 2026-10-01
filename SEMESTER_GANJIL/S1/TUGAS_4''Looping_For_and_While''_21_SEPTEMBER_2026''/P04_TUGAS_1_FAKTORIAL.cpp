#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Masukkan angka positif untuk menghitung faktorial (angka negatif untuk berhenti): ";
        cin >> n;

        // negatif untuk berhenti
        if (n < 0) {
            cout << "SELESAI." << endl;
            break;
        }

        // Menghitung faktorial
        long long faktorial = 1;
        for (int i = 1; i <= n; ++i) {
            faktorial *= i;
        }

        cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
    }

    return 0;
}

/*Masukkan angka positif untuk menghitung faktorial (angka negatif untuk berhenti): 58
Faktorial dari 58 adalah: 2504001392817995776
Masukkan angka positif untuk menghitung faktorial (angka negatif untuk berhenti): -34
SELESAI.*/