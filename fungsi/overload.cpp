#include <iostream>
using namespace std;

// overloading fungsi secara konsep
// maksudnya adalah berbagai bentuk fungsi dalam satu nama yang sama

// studi kasus
// basic function
int luas_kotak(int panjang, int lebar) { // dalam fungsi ini bukankah kotak itu banyak bentuk?
    return panjang*lebar;
} // bagaimana kalau kotaknya persegi, rumusnya hanya perlu satu input

// overload
int luas_kotak(int sisi) {
    return sisi*sisi;
} // lalu bagaimana jika yang input yang dihitung adalah float?

double luas_kotak(double panjang, double lebar) {
    return panjang*lebar;
}

int main() {

    cout << "luas kotak 2x3: " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2x2: " << luas_kotak(2) << endl;
    cout << "luas kotak 2.5x2.5: " << luas_kotak(2.5,2.5) << endl;
    // nanti programnya akan memilih mana yang sebaiknya digunakan

    return 0;
}