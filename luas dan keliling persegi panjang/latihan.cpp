#include <iostream>
#include <string>
using namespace std;

// fungsi menghitung keliling
double kelilingPP(float p,float l) {
    double keliling = 2 * (p + l);
    return keliling;
}

// fungsi menghitung luas
double luasPP(float p, float l) {
    double luas = p * l;
    return luas;
}

// fungsi tampil
void tampil(string name, double hasil) {
    cout << name << " = " << hasil << "\n";
}

int main() {
    float panjang,lebar;
    cout << "nilai panjang: ";
    cin >> panjang;
    cout << "nilai lebar: ";
    cin >> lebar;

    tampil("keliling",kelilingPP(panjang,lebar));
    tampil("luas",luasPP(panjang,lebar));

    return 0;
}