// File: fileio.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    { //Part 1 Count every character in file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        char ch = ' ';
        int index = 0;

        if (!inFile.eof()) inFile.get(ch);
        while (!inFile.eof()) {
            index++;
            std::cout << index << ": "<< ch << std::endl;
            inFile.get(ch);
        }
        std::cout << "Total: " << index << std::endl;
        std::cout << "Done with Part 1" << std::endl << std::endl;
        inFile.close();
    }

    { //Part 2 Count non white space character in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        char ch;
        int index = 0;

         while (inFile >> ch) {        
         index++;
         std::cout << index << ": " << ch << std::endl;
        }
        std::cout << "Total: " << index << std::endl;
        std::cout << "Done with Part 2" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 3 Count number of words in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        char word[120];   // enough space for one word
        int wordCount = 0;

        while (inFile >> word) {   
        wordCount++;
        std::cout << wordCount << ": " << word << std::endl;
        }

        std::cout << "Total words: " << wordCount << std::endl;
        std::cout << "Done with Part 3" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 4 Count number lines in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        const int SIZE = 120;   // max line length 
        char line[SIZE];
        int lineCount = 0;
        inFile.getline(line, SIZE);

        while (!inFile.eof()) {
        lineCount++;
        std::cout << lineCount << ": " << line << std::endl;
        inFile.getline(line, SIZE);   // read next line
       }
       std::cout << "Total lines: " << lineCount << std::endl;
       std::cout << "Done with Part 4" << std::endl << std::endl;
       inFile.close();
    }

    return 0;
}
