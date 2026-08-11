#include <iostream>
using namespace std; // ini membuat kita tidak perlu menuliskan std:: setiap kita mau menulis kode dari library standard

int main() {
    int b; // variable b belum memiliki nilai
    cout << "masukan nilai: ";
    cin >> b; // memasukan nilai ke 'b' lewat input di console
    cout << "nilai yang anda isi: " << b << endl; //menampilkan nilai dari 'b'
    return 0;
}