#include "bigint.hpp"
#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("data1-2.txt");
    if (!fin) {
        std::cerr << "Error: could not open file data1-2.txt" << std::endl;
        return 1;
    }

    Bigint num1, num2;
    int pairCount = 1;

    while (fin >> num1 >> num2) {
        std::cout << "Pair #" << pairCount << ":\n";
        std::cout << "Number 1: " << num1 << "\n";
        std::cout << "Number 2: " << num2 << "\n";

        Bigint product = num1 * num2;
        std::cout << "Product:  " << product << "\n";
        std::cout << "---------------------------\n";

        pairCount++;
    }

    fin.close();
    std::cout << "Finished processing all pairs in data1-2.txt" << std::endl;

    return 0;
}
