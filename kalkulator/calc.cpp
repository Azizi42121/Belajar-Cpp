#include <iostream>
using namespace std;

int main() {
    float a,b,hasil;
    char op;

    // mengambil input dari user
    cout << "nilai pertama: ";
    cin >> a;
    cout  << "operator (+,-,/,*): ";
    cin >> op;
    cout << "nilai kedua: ";
    cin >> b;

    // proses perhitungan
    switch (op) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        default:
            cout << "operator tidak ditemukan" << "\n";
    }

    // menampilkan hasil perhitungan
    cout << "Hasil perhitungan = " << hasil << "\n";

    return 0;
}