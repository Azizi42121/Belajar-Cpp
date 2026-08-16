#include <iostream>
using namespace std;

// membuat fungsi dengan reference sebenarnya konsepnya sama dengan fungsi pointer
// tapi kalau menggunakan reference kode akan lebih rapih

void fungsi(int &b) { // berarti jika kita menginput variabel, ia akan langsung mengambil addressnya
    b = 10;
    cout << "address dari b " << &b << "\n";
    cout << "  nilai dari b " << b << "\n";
}

void kuadrat(int &nilaiRef) {
    nilaiRef = nilaiRef * nilaiRef; // tidak perlu ada tanda tambahan lagi
    // karena ia akan mengambil address dan nilainya
}

int main() {
    int a = 5;
    cout << "address dari a " << &a << "\n";
    cout << "  nilai dari a " << a << "\n";

    // nah disini kita tidak perlu repot-repot mengambil address dari variabel lagi
    // karena fungsinya yang akan mengambil addressnya
    fungsi(a);
    kuadrat(a);

    cout << "  nilai a " << a << "\n";

    return 0;
}