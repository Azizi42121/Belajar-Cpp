#include <iostream>
#include <limits> // untuk numeric_limits
using namespace std;

// tipe data fundamental di cpp
// tipe data di sini cukup unik karena dapat mengatur besaran penyimpanan
int main() {
    // bilangan bulat
    int a = 5; // 4 byte/32-bit. Bisa ditambahkan unsigned sebelum int untuk menghilangkan bentuk negatif/positif
    long b = 6; // 4-8 byte/64-bit
    short c = 7; // 2 byte/16-bit

    // bilangan desimal
    float d = 1.5; // 4 byte
    double e = 1.9866; // 8 byte

    // character
    char f = 'a'; // 1 byte
    // string tidak termasuk fundamental karena string didefinisikan sebagai kumpulan char

    // boolean
    bool g = true; // true/false pasti 1 byte

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    cout << b << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cout << d << endl;
    cout << sizeof(d) << " byte" << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;

    cout << e << endl;
    cout << sizeof(e) << " byte" << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;

    cout << f << endl;
    cout << sizeof(f) << " byte" << endl;
    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<char>::min() << endl;

    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    return 0;
}