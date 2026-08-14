#include <iostream>
using namespace std;

// default argument
// nilai input terisi jika tidak ada nilai yang diinput
// default nilai dari inputnya
double volume_kubus(int p,int l,int t = 1); // default argumen dari t adalah 1

int main() {
    int hasil1 = volume_kubus(1,2,3);
    int hasil2 = volume_kubus(5,3); // -> tidak ada nilai variabel t
    cout << hasil1 << "\n" << hasil2 << endl;

    return 0;
}

double volume_kubus(int p,int l,int t) {
    return p*l*t;
}