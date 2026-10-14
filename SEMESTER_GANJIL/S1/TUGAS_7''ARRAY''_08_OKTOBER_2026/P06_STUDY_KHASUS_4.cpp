#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int number = 123450;
    cout << "Jumlah digit: " << countDigits(number) << endl;
    number = 012345;
    cout << "Jumlah digit: " << countDigits(number) << endl;
    return 0;
}

/*Jumlah digit: 6
Jumlah digit: 4*/