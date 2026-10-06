#include <iostream>
using namespace std;
void displayFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i; 
        cout << "Faktorial dari " << i << " adalah " << factorial << endl;
    }
}
int main() {
    int num = 5;
    displayFactorial(num); 
return 0;
}
/*Faktorial dari 1 adalah 1
Faktorial dari 2 adalah 2
Faktorial dari 3 adalah 6
Faktorial dari 4 adalah 24
Faktorial dari 5 adalah 120*/