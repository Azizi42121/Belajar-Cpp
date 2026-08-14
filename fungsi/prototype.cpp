#include <iostream>
using namespace std;

// prototype fungsi
// konsepnya sama seperti inisialisasi varibel dulu, baru diberikan nilainya
double hitungLuas(double a, double b);
void println(double f);

int main() {
    double panjang, lebar, hasil;
    cin >> panjang >> lebar;
    hasil = hitungLuas(panjang,lebar);
    println(hasil);
    return 0;
}

double hitungLuas(double a,double b) {
    return a*b;
}

void println(double f) {
    cout << f << "\n";
}