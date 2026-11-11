#include <iostream>

using namespace std;


void tampilkanMatriksRekursif(int** matriks, int baris, int kolom, int current_baris = 0) {
  
    if (current_baris >= baris) {
        return;
    }
    
   
    for (int j = 0; j < kolom; j++) {
        cout << matriks[current_baris][j] << " ";
    }
    cout << endl;
    
   
    tampilkanMatriksRekursif(matriks, baris, kolom, current_baris + 1);
}

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int** matriksAsli = new int*[baris];
    int** matriksTranspose = new int*[kolom];

    for (int i = 0; i < baris; i++) {
        matriksAsli[i] = new int[kolom];
    }
    for (int i = 0; i < kolom; i++) {
        matriksTranspose[i] = new int[baris];
    }

    cout << "Masukkan elemen matriks (" << baris << "x" << kolom << "):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> matriksAsli[i][j];
        }
    }

  
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriksTranspose[j][i] = matriksAsli[i][j];
        }
    }

  
    cout << "\nMatriks asli:" << endl;
    tampilkanMatriksRekursif(matriksAsli, baris, kolom);

    cout << "\nMatriks transpose:" << endl;
    tampilkanMatriksRekursif(matriksTranspose, kolom, baris);

  
    for (int i = 0; i < baris; i++) {
        delete[] matriksAsli[i];
    }
    delete[] matriksAsli;

    for (int i = 0; i < kolom; i++) {
        delete[] matriksTranspose[i];
    }
    delete[] matriksTranspose;

    return 0;
}