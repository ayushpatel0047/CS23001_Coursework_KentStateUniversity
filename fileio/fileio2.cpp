// File: fileio2.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio2.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

//Part 5 
//Read in a integer that is the number of lines to read
//Each line has only one word on it.
//Use data3.txt

int main(int argc, char *argv[]) {
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    int lineCount;
    inFile >> lineCount; // read sentinel value
    std::cout << "Line count to read: " << lineCount << std::endl;

    char word[120]; // enough space for one word
    int readCount = 0;

    while (readCount < lineCount && (inFile >> word)) {
        readCount++;
        std::cout << readCount << ": " << word << std::endl;
    }

    std::cout << "Total lines read: " << readCount << std::endl;

  
    if (readCount < lineCount) {
        std::cout << "File end, lines to read was " << lineCount << " "<< "but only read "
                  << readCount << "." << std::endl;
    }
    
    std::cout << "Done with Part 5" << std::endl << std::endl;
    inFile.close();
    return 0;
}
