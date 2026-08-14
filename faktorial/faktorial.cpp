#include <iostream>
using namespace std;

int factorial(int faktor) {
    if(faktor <= 1) {
        return faktor;
    } else {
        return faktor * factorial(faktor - 1);
    }
}

int main() {
    cout << "faktorial dari 5 = " << factorial(5) << "\n";
    cout << "faktorial dari 8 = " << factorial(8) << "\n";
    cout << "faktorial dari 10 = " << factorial(10) << "\n";
    cout << "faktorial dari 3 = " << factorial(3) << "\n";
}