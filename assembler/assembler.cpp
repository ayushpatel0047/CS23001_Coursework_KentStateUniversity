#include "utilities.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " input_file [output_file]\n";
        return 1;
    }

    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cout << "Error opening input file: " << argv[1] << "\n";
        return 1;
    }

    std::ostream* out = &std::cout;
    std::ofstream outFile;
    if (argc >= 3) {
        outFile.open(argv[2]);
        if (!outFile) {
            std::cout << "Error opening output file: " << argv[2] << "\n";
            return 1;
        }
        out = &outFile;
    }

    char buffer[512];
    while (inFile.getline(buffer, 512)) {
        String line(buffer);
        if (line.length() == 0) continue;

        String postfix = infixToPostfix(line);
        *out << "Infix Expression: " << line << "\n";
        *out << "Postfix Expression: " << postfix << "\n";
        
        // outputs assembly code for Milestone 3
        postfixToAssembly(postfix, *out);
        *out << "\n";
    }

    return 0;
}