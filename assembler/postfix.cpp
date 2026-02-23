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

    String line;
    char ch;
    
    while (inFile.get(ch)) {
        if (ch == '\n') {
            if (line.length() > 0) {
                String postfix = infixToPostfix(line);
                *out << "Infix Expression: " << line << "\n";
                *out << "Postfix Expression: " << postfix << "\n\n";
                line = ""; 
            }
        } else {
            line = line + ch;
        }
    }

    // process last line if file dont end with newline
    if (line.length() > 0) {
        String postfix = infixToPostfix(line);
        *out << "Infix Expression: " << line << "\n";
        *out << "Postfix Expression: " << postfix << "\n\n";
    }

    return 0;
}