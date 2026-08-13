#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    while(true) {
        char choice;
        cout << "Lempar Dadu? (y/n) ";
        cin >> choice;

        if (choice == 'y') {
            cout << 1 + (rand() % 6) << endl;
        } else if(choice == 'n') {
            break;
        } else {
            cout << "Warning: Pilih y atau n!!" << "\n";
        }
    }
}