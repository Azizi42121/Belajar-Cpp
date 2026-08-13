#include <iostream>
#include <string>
using namespace std;

// void adalah fungsi yang tidak mengeluarkan sebuah nilai
// kalau fungsi dg keluaran disebut reporter
// void disebut worker

void tampilkan(string input) {
    cout << input << endl;
}

int main() {
    string name = "Jake";
    tampilkan(name);
    return 0;
}