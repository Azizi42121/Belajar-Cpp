#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
using namespace std;

int main() {
    ofstream myFile;

    // ios::out = default, operasi output
    // ios::app = menuliskan pada akhir baris;
    // ios::trunc = default, memembuat file jika tidak ada, menimpa file jika sudah ada

    int a = 123456;
    myFile.open("data1.txt", ios::out); 
    myFile << "menuliskan pada data1\n";
    myFile << a;
    myFile.close();
    
    myFile.open("data2.txt", ios::trunc); 
    myFile << "\nmenuliskan pada data2";
    myFile.close();
    
    myFile.open("data3.txt", ios::app); 
    myFile << "\nmenuliskan pada data3";
    myFile.close();
}