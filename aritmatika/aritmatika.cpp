#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 4;

    int hasil;

    // operator +,-,*,/,%
    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << "\n";

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << "\n";

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << "\n";

    // pembagian
    hasil = a / b; // karena pakai int jadi tidak ada komanya
    cout << a << " : " << b << " = " << hasil << "\n";
    // kalau ingin ada komanya salah satu angka harus float dan variabel hasil bertipe float, hasilnya tidak akan keluar jika hanya hasilnya yang float

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << "\n";

    // urutan eksekusi
    // urutannya sama seperti matematika pada umumnya
    int c = 5;
    int hasil1 = (a+b) * c;
    int hasil2 = a + b * c;
    cout << "(" << a << "+" << b << ")" << " * " << c << " = " << hasil1 << "\n";
    cout << a << " + " << b << " * " << c << " = " << hasil2 << "\n";

    return 0;
}