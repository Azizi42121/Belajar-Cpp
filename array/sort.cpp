#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &angka){
	std::cout << "Array: ";
	for(char &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main() {
    array <int, arraySize> angka = {7,6,3,5,4,1,8,2,9,0};
    array <char, arraySize> huruf = {'b','a','j','g','h','c','e','d','i','f'};

    printArray(angka);
    printArray(huruf);

    sort(angka.begin(),angka.end());
    printArray(angka);

    sort(huruf.begin(),huruf.end());
    printArray(huruf);

    return 0;
}