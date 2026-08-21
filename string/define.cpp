#include <iostream>
#include <string>
using namespace std;

// secara definisi string adalah sekumpulan char yang tersusun

int main(){
    char word[5] = {'m','o','b','i','l'};
    // array tidak bisa ditambah, fix karena array

    string kata("motor");
    cout << kata << endl;

    string data;
    cout << "masukkan kata:" << endl;
    cin >> data;
    cout << "kata yang dimasukkan adalah:" << endl;
    cout << data; // spasi tidak bisa dibaca, harus menggunakan strip atau library khusus

    return 0;
}