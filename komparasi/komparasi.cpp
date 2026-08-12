#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 2;

    bool hasil1,hasil2;

    // sebanding
    hasil1 = (a == b);
    cout << hasil1 << "\n";

    // tidak sebanding
    hasil1 = (a != b);
    cout << hasil1 << "\n";

    // lebih dari dan lebih dari atau sama dengan
    hasil1 = (a > b);
    hasil2 = (a >= b);
    cout << hasil1 << "\n" << hasil2 << "\n";

    // kurang dari dan kurang dari atau sama dengan
    hasil1 = (a < b);
    hasil2 = (a <= b);
    cout << hasil1 << "\n" << hasil2 << "\n";

    return 0;
}