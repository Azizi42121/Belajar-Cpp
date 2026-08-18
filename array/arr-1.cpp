#include <iostream>
using namespace std;

int main() {

    // membuat array
    int nilai[5]; // untuk membuat array di cpp. kita harus mendeklarasikan berapa jumlah data yang akan disimpan di dalamnya

    // mengisi data ke dalam array
    nilai[0] = 0; // kita harus memakai index untuk memasukan data ke dalam array
    nilai[1] = 1; // dan itu harus dilakukan satu-satu pada setiap index
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    // jika kita mengeluarkannya seperti ini
    cout << nilai << endl;
    // yang akan keluar adalah address dari array tersebut

    // data di dalam setiap array akan disimpan secara berurutan
    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl; // karena int berukuran 4 byte, maka pola addressnya akan menjadi seperti ini (0,4,8,12,16)
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl; // karena int berukuran 4 byte, maka pola addressnya akan menjadi seperti ini (0,4,8,12,16)
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl; // karena int berukuran 4 byte, maka pola addressnya akan menjadi seperti ini (0,4,8,12,16)
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl; // karena int berukuran 4 byte, maka pola addressnya akan menjadi seperti ini (0,4,8,12,16)
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl; // karena int berukuran 4 byte, maka pola addressnya akan menjadi seperti ini (0,4,8,12,16)

    // array di cpp sangatlah basic, tidak ada method-method lain seperti panjang array, ukuran array, dlsb
    return 0;
}