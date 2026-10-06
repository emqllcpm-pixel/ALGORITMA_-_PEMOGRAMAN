#include <iostream>
using namespace std;

    void calculateSquare (int &number) {    
        number *= number; } 
        int main() {    
            int num = 5;    
            calculateSquare(num);    
            cout << "Kuadrat dari 5 adalah" << num << " adalah " << num << endl; 
            return 0; 
        }
/*Kuadrat dari 5 adalah25 adalah 25*/