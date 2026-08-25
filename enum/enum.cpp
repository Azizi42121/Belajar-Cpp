#include <iostream>

using namespace std;

enum warna {merah,biru,kuning,hijau,coklat = 5,hitam};

int main() {
    warna kain1,kain2;
    kain1 = hitam;
    kain2 = coklat;

    if(kain1 == hitam) {
        cout << "warna kain adalah hitam" << endl;
    }

    cout << kain1 << "\n" << kain2 << endl;

    return 0;
}