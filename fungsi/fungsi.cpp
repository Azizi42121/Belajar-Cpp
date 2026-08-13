#include <iostream>
using namespace std;

int kuadrat(int x) { //input harus dideklarasi tipe datanya
    int y;
    y = x*x;
    return y;
}

int tambah(int a,int b) { //fungsi dengan dua input
    int c;
    c = a + b;
    return c;
}

int main() {
    int input, hasil;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << "\n";

    int a,b;
    cin >> a >> b;
    cout << tambah(a,b);

    return 0;
}