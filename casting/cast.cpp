#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << (int)b << endl;

    cout << (int)c << endl;

    cout << (char)(c + a) << endl;

    return 0;
}