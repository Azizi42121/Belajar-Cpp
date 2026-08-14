#include <iostream>
using namespace std;

// pointer secara konsep
// artinya adalah mengakses nilai/data dari alamatnya

int main() {
    int a = 5; // variabel
    
    // pointer
    int *aPtr = nullptr; // menggunakan tanda bintang untuk menggunakan pointer
    // namun variabel pointer tidak bisa menggunakan nama dari variabel yang ingin dicari addressnya
    aPtr = &a; // cara mengakses address variabel
    // untuk mengakses address dari variabel. Gunakan & di nama variabelnya

    // * -> Digunakan untuk menginisialisasi variabel yang akan mengakses address
    // & -> Digunakan untuk mengambil address dari variabel

    // int a pasti memiliki nilai dan address
    cout << " nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl; // ini hanya mengambil address saja

    
    // dereferencing, mengambil data dari sebuah pointer
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl;
    // Gunakan * jika ingin mengambil nilainya

    return 0;
}