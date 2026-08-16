#include <iostream>
using namespace std;

// reference
// adalah membagi satu alamat yang sama dengan dua atau lebih variabel

int main() {

    // variabel
    int a = 5;

    cout << "address dari a " << &a << "\n"; // tanda & digunakan untuk mengakses address
    cout << "  nilai dari a " << a << "\n\n";

    // reference
    int &b = a; // maksudnya menginisialisasi variabel b dengan alamat yang sama dengan variabel a

    cout << "  nilai dari b " << b << "\n";
    cout << "address dari b " << &b << "\n\n";

    // disini mengganti nilai b akan mengganti nilai a juga, karena mereka berbagi alamat data yang sama
    b = 10;

    cout << "  nilai dari a " << a << "\n";
    cout << "  nilai dari b " << b << "\n\n";

    // begitu juga sebaliknya, jika mengganti nilai a maka nilai b juga akan terganti
    a = 20;

    cout << "  nilai dari a " << a << "\n";
    cout << "  nilai dari b " << b << "\n\n"; 
    
    return 0;
}