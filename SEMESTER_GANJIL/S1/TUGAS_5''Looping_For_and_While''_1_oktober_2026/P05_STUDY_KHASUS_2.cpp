#include <iostream>
using namespace std;
void recursion(int n) {   // ditambahkan n agar program tidak berjalan terus
    if (n<= 0) return; // kondisi berhenti
cout << "Halo." << endl;    
recursion(n - 1); 
}
int main() {    
recursion(3);   //mencetak Halo sebanyak 3x  
return 0;
}
/*Halo.
Halo.
Halo.*/