#include <iostream>
using namespace std;

int main() {
    int a,b,c,temp;
    a = 0;
    b = 1;
    c = 6;

    for (int i = 0; i <= c; i++) {
        temp = a + b;
        b = a;
        a = temp;
        cout << temp;
    }

    return 0;
}