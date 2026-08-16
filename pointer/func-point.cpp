#include <iostream>
using namespace std;

// membuat fungsi dengan pointer tidak perlu keluaran lagi
// karena ia sudah memasukkan nilainya ke address

void fungsi(int *b) { // menggunakan pointer untuk mengambil address saja
    cout << "address dari b " << b << "\n"; // menampilkan address dengan menuliskan b saja, karena sejak awal yang diinput adalah address bukan variabel
    cout << "  nilai dari b " << *b << "\n"; // menggunakan dereferencing untuk menampilkan nilai dari si variabel
}

void kuadrat(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr); // ini yang dimaksud tidak perlu return lagi
} // tadinya membuat fungsi kuadrat perlu mereturn nilainya, jika menggunakan void, kita harus langsung menampilkannya

int main() {
    int a = 5;

    cout << "  nilai dari a " << a << "\n";
    cout << "address dari a " << &a << "\n";

    fungsi(&a); // disini kita langsung menginputkan addressnya, bukan variabelnya
    kuadrat(&a);

    // akhirnya di fungsi kuadrat kita tidak perlu memasukkan ulang nilai yang dikuadratkan seperti:
    // int a = kuadrat(a);
    // karena kita sudah langsung memasukkan nilai kuadrat ke dalam address dari variabel a

    cout << "  nilai dari a " << a << "\n";

    return 0;
}
