#include <iostream>
#include <string>
using namespace std;

// aktor
struct aktor {
    string nama;
    int tahun_lahir;
};

// film
struct film {
    string judul;
    string genre;
    int tahun;
    // struct aktor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main() {

    aktor aktor1, aktor2;
    film film1, film2;

    // buat aktor
    aktor1.nama = "Travis Sium";
    aktor1.tahun_lahir = 1991;

    aktor2.nama = "Sadie Sinkhole";
    aktor2.tahun_lahir = 2002;

    // buat film
    film1.judul = "The Odinius";
    film1.genre = "Fantasy";
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul = "Spider-Man Brand China";
    film2.genre = "Comedy";
    film2.pemeran_1 = aktor2;


    cout << film1.judul << "\n";
    cout << film1.pemeran_1.nama << "\n";
    cout << film1.pemeran_2.nama << "\n";

    cout << film2.judul << "\n";
    cout << film2.pemeran_1.nama << "\n";
    cout << film2.pemeran_2.nama << "\n";
}