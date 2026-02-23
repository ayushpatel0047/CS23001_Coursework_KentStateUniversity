#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
using std::cin;
using std::cout;
usind std::endl;

vector<String> tokenize(const String& expr) {
    vector<String> tokens;
    int start = 0;

    while (start < expr.length()) {
        int end = expr.findch(start, ' ');
        if (end == -1) end = expr.length();
        String t = expr.substr(start, end - 1);
        if (t.length() > 0) tokens.push_back(t);
        start = end + 1;
    }
    return tokens;
}

String infixToPrefix(const vector<String>& expr) {
    stack<String> S;

    // For each token in the infix expression
    for (int i = 0; i < static_cast<int>(expr.size()); ++i) {
        String t = expr[i];

        if (t == ")") {
            // If a righht parenthhesis, then combine into subexpression
            String rhs = S.pop();
            String op  = S.pop();
            String lhs = S.pop();
            S.push(op + " " + lhs + " " + rhs);
        }
        else if (t != "(" && t != ";") {
            S.push(t);
        }
    }

    return S.pop();
}

// main
int main() {
    ifstream file("infix2prefix/data3-1.txt");
    if (!file.is_open()) {
        cout << "Error: could not open infix2prefix/data3-1.txt" << endl;
        return 1;
    }

    while (true) {
        String token;
        String expr;

        while (file >> token) {
            expr = expr + token + " ";
            if (token == ";") break;
        }

        if (expr.length() == 0) break;

        vector<String> tokens = tokenize(expr);
        String prefix = infixToPrefix(tokens);

        cout << "Infix: " << expr << endl;
        cout << "Prefix: " << prefix << endl << endl;
    }

    file.close();
    return 0;
}
