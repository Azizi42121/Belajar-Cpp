#include <iostream>
using namespace std;

int main() {
    int a;
    a = 5;

    // pola 1
    for(int i = 0; i <= a; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    // pola 2
    for(int i = 0; i < a; i++) {
        for(int j = a; j > i; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    // pola 3
    for(int i = 0; i < a; i++) {
        for(int j = a; j > i; j--) {
            cout << " ";
        }

        for(int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    // pola 4 
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        for(int k = a; k > i; k--) {
            cout << "*";
        }

        cout << "\n";
    }
}