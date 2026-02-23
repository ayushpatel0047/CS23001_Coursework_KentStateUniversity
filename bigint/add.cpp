#include "bigint.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("data1-1.txt"); // open the input file

    // Test if file opened successfully
    if (!fin) {
        cerr << "Error: could not open file data1-1.txt" << endl;
        return 1;
    }

    Bigint num1, num2;
    int pairCount = 1;

    // Read and process numbers until EOF
    while (fin >> num1 >> num2) {
        cout << "Pair #" << pairCount << ":" << endl;
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;

        Bigint sum = num1 + num2;
        cout << "Sum:      " << sum << endl;
        cout << "---------------------------" << endl;

        pairCount++;
    }

    fin.close();
    return 0;
}
