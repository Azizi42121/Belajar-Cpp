#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat_1("entah siapa yang salah, kutak tahu");
    string kalimat_2("hidup jokowi!");

    cout << "1: " << kalimat_1 << "\n";
    cout << "2: " << kalimat_2 << "\n";

    // swap string
    kalimat_1.swap(kalimat_2);
    cout << "swap_string" << "\n";
    cout << "1: " << kalimat_1 << "\n";
    cout << "2: " << kalimat_2 << "\n";

    // replace, mengganti string
    kalimat_2.replace(24,5,"prabowo");
    kalimat_1.replace(kalimat_1.find("jokowi"),6,"gibran");

    cout << "replace_string" << "\n";
    cout << "1: " << kalimat_1 << "\n";
    cout << "2: " << kalimat_2 << "\n";

    // insert string
    kalimat_2.insert(31," pun tak ");
    cout << "insert_string" << "\n";
    cout << "1: " << kalimat_1 << "\n";
    cout << "2: " << kalimat_2 << "\n";
}