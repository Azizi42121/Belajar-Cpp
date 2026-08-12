#include <iostream>
using namespace std;

int main() {
    int a = 0;

    do {
        cout << "putaran ke-" << a << "\n";
        a += 1;
    }while (a <= 5);
    
    return 0;
}