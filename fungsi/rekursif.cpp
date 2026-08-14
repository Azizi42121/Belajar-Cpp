#include <iostream>
using namespace std;

// fungsi rekursif adalah fungsi yang memanggil dirinya sendiri agar terjadi pengulangan
int pangkat(int angka,int banyak) {

    if (banyak <= 1) {
        return angka;
    } else {
        return angka * pangkat(angka,(banyak-1));
    }
}

int main() {
    cout << "3 pangkat 5 = " << pangkat(3,5) << "\n";
    cout << "4 pangkat 8 = " << pangkat(4,8) << "\n";
}