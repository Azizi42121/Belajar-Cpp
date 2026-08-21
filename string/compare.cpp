#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string name("brody");

    while(true) {
        cout << "masukkan tebakan nama: ";
        cin >> input;
        cout << input << endl;
        if(input == name) {
            cout << "tebakan anda benar!!!!" << "\n";
            break;
        }
        cout << "tebakan anda salah!!!" << "\n";
    }

    cout << "PROGRAM SELESAI" << endl;

    return 0;
}