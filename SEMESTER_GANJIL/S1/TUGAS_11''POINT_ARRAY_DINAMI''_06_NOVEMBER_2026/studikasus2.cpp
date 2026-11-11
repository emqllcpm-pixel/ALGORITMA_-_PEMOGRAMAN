#include <iostream>
using namespace std;

int** buatMatriks(int baris, int kolom) {
    int** m = new int*[baris];
    for (int i = 0; i < baris; i++) {
        m[i] = new int[kolom];
    }
    return m;
}

void hapusMatriks(int** m, int baris) {
    for (int i = 0; i < baris; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void isiMatriks(int** m, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> m[i][j];
        }
    }
}

int main() {
    int b1, k1, b2, k2;
    cout << "Ukuran matriks A (baris kolom): ";
    cin >> b1 >> k1;
    cout << "Ukuran matriks B (baris kolom): ";
    cin >> b2 >> k2;

    if (b1 <= 0 || k1 <= 0 || b2 <= 0 || k2 <= 0) {
        cout << "Error: ukuran matriks harus lebih dari 0." << endl;
        return 0;
    }
    if (k1 != b2) {
        cout << "Error: matriks tidak dapat dikalikan (kolom A harus sama dengan baris B)." << endl;
        return 0;
    }

    int** A = buatMatriks(b1, k1);
    int** B = buatMatriks(b2, k2);
    int** C = buatMatriks(b1, k2);

    cout << "Matriks A (" << b1 << "x" << k1 << "):" << endl;
    isiMatriks(A, b1, k1);
    cout << "Matriks B (" << b2 << "x" << k2 << "):" << endl;
    isiMatriks(B, b2, k2);

    // perkalian memakai pointer
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            *(*(C + i) + j) = 0;
            for (int k = 0; k < k1; k++) {
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    cout << "Hasil perkalian Matriks A dan B:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            cout << *(*(C + i) + j) << " ";
        }
        cout << endl;
    }

    hapusMatriks(A, b1);
    hapusMatriks(B, b2);
    hapusMatriks(C, b1);
    return 0;
}