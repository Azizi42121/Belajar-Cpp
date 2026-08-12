#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if ((a % 2) == 1) {
        cout << "angka anda ganjil" << "\n";
    } else {
        cout << "angka anda genap" << "\n";
    }

    return 0;
}