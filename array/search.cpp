#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main() {
    array <int, arraySize> angka = {9,2,0,1,3,8,4,7,5,6};
    printArray(angka);

    int angkaCari;
    bool ketemu;
    // sort dulu
    // search -> binary_search
    cout << "mencari angka dalam array diatas: \n";
    cin >> angkaCari;
    sort(angka.begin(),angka.end());
    ketemu = binary_search(angka.begin(),angka.end(),angkaCari);

    if (ketemu) {
        cout << "ketemu" << endl;
    } else {
        cout << "tidak ketemu" << endl;
    }

    return 0;
}