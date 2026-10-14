#include <iostream>
using namespace std;
int main() {
int arr[5] = {1, 2, 3, 4, 5}; 

cout << "Angka genap: "; 
for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) { 
        cout << arr[i] << " "; 
    } 
} 
cout << endl << "Angka ganjil: "; 
for (int i = 0; i < 5; i++) { 
    if (arr[i] % 2 != 0) { 
        cout << arr[i] << " "; 
    } 
}
    cout << endl;
    return 0;
}

/*Angka genap: 2 4 
Angka ganjil: 1 3 5 */