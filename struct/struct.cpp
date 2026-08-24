#include <iostream>
#include <string>
using namespace std;

// Struct: data yang dibentuk oleh beberapa data

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main() {

    buah apel;
    buah jeruk;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "manis kesat";

    jeruk.warna = "oranye";
    jeruk.berat = 150.50f;
    jeruk.harga = 20000;
    jeruk.rasa = "asam";

    cout << " apel " << "\n";
    cout << "-" << apel.warna << "\n";
    cout << "-" << apel.berat << "\n";
    cout << "-" << apel.harga << "\n";
    cout << "-" << apel.rasa << "\n";
    
    cout << " jeruk " << "\n";
    cout << "-" << jeruk.warna << "\n";
    cout << "-" << jeruk.berat << "\n";
    cout << "-" << jeruk.harga << "\n";
    cout << "-" << jeruk.rasa << "\n";

    return 0;
}