#include <iostream>
#include <cmath>
#include <iomanip>

// Fungsi turunan f'(x) = 2x - 4
using namespace std;
double get_gradient(double x) {
    return 2.0 * x - 4.0;
}

void run_gradient_descent(double learning_rate, string label) {
    double x = 0.0; // Mulai dari x = 0
    double target = 2.0;
    int iterasi = 0;

    cout << "\n=============================================\n";
    cout << " Menjalankan Gradient Descent dengan LR = " << learning_rate << " (" << label << ")\n";
    cout << "=============================================\n";
    cout << setw(10) << "Iterasi" << setw(15) << "Nilai x" << setw(15) << "Jarak ke 2" << "\n";

    // Tampilkan kondisi awal
    cout << setw(10) << iterasi << setw(15) << x << setw(15) << abs(x - target) << "\n";

    // Batasi maksimum iterasi agar tidak infinite loop pada kasus divergen
    while (iterasi < 30) {
        double grad = get_gradient(x);
        x = x - learning_rate * grad;
        iterasi++;

        double jarak = abs(x - target);
        cout << setw(10) << iterasi << setw(15) << x << setw(15) << jarak << "\n";

        // Cek kondisi berhenti untuk LR = 0.1
        if (learning_rate == 0.1 && jarak < 0.01) {
            cout << "\n>>> Sukses! x berjarak kurang dari 0.01 dari minimum pada iterasi ke-" << iterasi << "\n";
            break;
        }
    }
}

int main() {
    // Pengaturan presisi angka di output terminal
    cout << fixed << setprecision(5);

    // Kasus 1: Learning Rate 0.1
    run_gradient_descent(0.1, "Konvergen");

    // Kasus 2: Learning Rate 1.1
    run_gradient_descent(1.1, "Divergen");

    return 0;
}
/*=============================================
 Menjalankan Gradient Descent dengan LR = 0.10000 (Konvergen)
=============================================
   Iterasi        Nilai x     Jarak ke 2
         0        0.00000        2.00000
         1        0.40000        1.60000
         2        0.72000        1.28000
         3        0.97600        1.02400
         4        1.18080        0.81920
         5        1.34464        0.65536
         6        1.47571        0.52429
         7        1.58057        0.41943
         8        1.66446        0.33554
         9        1.73156        0.26844
        10        1.78525        0.21475
        11        1.82820        0.17180
        12        1.86256        0.13744
        13        1.89005        0.10995
        14        1.91204        0.08796
        15        1.92963        0.07037
        16        1.94371        0.05629
        17        1.95496        0.04504
        18        1.96397        0.03603
        19        1.97118        0.02882
        20        1.97694        0.02306
        21        1.98155        0.01845
        22        1.98524        0.01476
        23        1.98819        0.01181
        24        1.99056        0.00944

>>> Sukses! x berjarak kurang dari 0.01 dari minimum pada iterasi ke-24

=============================================
 Menjalankan Gradient Descent dengan LR = 1.10000 (Divergen)
=============================================
   Iterasi        Nilai x     Jarak ke 2
         0        0.00000        2.00000
         1        4.40000        2.40000
         2       -0.88000        2.88000
         3        5.45600        3.45600
         4       -2.14720        4.14720
         5        6.97664        4.97664
         6       -3.97197        5.97197
         7        9.16636        7.16636
         8       -6.59963        8.59963
         9       12.31956       10.31956
        10      -10.38347       12.38347
        11       16.86017       14.86017
        12      -15.83220       17.83220
        13       23.39864       21.39864
        14      -23.67837       25.67837
        15       32.81404       30.81404
        16      -34.97685       36.97685
        17       46.37222       44.37222
        18      -51.24667       53.24667
        19       65.89600       63.89600
        20      -74.67520       76.67520
        21       94.01024       92.01024
        22     -108.41229      110.41229
        23      134.49475      132.49475
        24     -156.99369      158.99369
        25      192.79243      190.79243
        26     -226.95092      228.95092
        27      276.74110      274.74110
        28     -327.68932      329.68932
        29      397.62719      395.62719
        30     -472.75263      474.75263*/