#include <iostream>
#include <string>
using namespace std;

int main() {

    string kalimat_1("Dayat suka olahraga supaya sehat");
    string kalimat_2("Khairan sering olahraga malam");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // substring, mengambil string di tengah-tengah
    // substr(index,panjang)
    cout << kalimat_1.substr(11,8) << endl;
    cout << kalimat_2.substr(8,6) << endl;

    // mencari posisi substring
    cout << "Posisi olahraga: " << kalimat_1.find("olahraga") << endl;
    cout << "Posisi sering:   " << kalimat_2.find("sering") << endl;

    int a = kalimat_1.find("ya");
    cout << a << endl;
    cout << kalimat_1.find("ya", a + 1) << endl;

    // mencari posisi dari belakang -> rfind
    cout << kalimat_2.rfind("i") << endl;
}