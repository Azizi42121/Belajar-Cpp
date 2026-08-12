#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "masukkan nilai: ";
    cin >> a;

    // switchcase di sini mencocokan nilainya lalu kondisi di bawahnya dijalankan, tidak hanya kondisi yang cocok saja
    switch (a) {
        case 1:
            cout << "a = 1" << "\n";
        case 2:
            cout << "a = 2" << "\n";
        case 3:
            cout << "a = 3" << "\n";
        case 4:
            cout << "a = 4" << "\n";
        case 5:
            cout << "a = 5" << "\n";
        default:  // -> ini nilai default jika tidak ditemukan nilai yang sama
            cout << "angka tidak ditemukan" << "\n";
    }

    int b;
    cout << "masukkan nilai: " << "\n";
    cin >> b;

    // maka kita perlu break untuk hanya menjalankan satu perintah kondisi saja
    switch (b) {
        case 1:
            cout << "ini satu" << "\n";
            break;
        case 2:
            cout << "ini dua" << "\n";
            break;
        case 3:
            cout << "ini tiga" << "\n";
            break;
        case 4:
            cout << "ini empat" << "\n";
            break;
        case 5:
            cout << "ini lima" << "\n";
            break;
        default:
            cout << "lu masukin apaan dah" << "\n";
            break;
    }
    cout << "PROGRAM SELESAI";

    return 0;
}