#include "utilities.hpp"

// Infix to Postfix
String infixToPostfix(const String& expr) {
    stack<String> opStack;
    String result;
    int len = expr.length();
    int i = 0;

    auto precedence = [](const String& op) -> int {
        if (op == "+" || op == "-") return 1;
        if (op == "*" || op == "/") return 2;
        return 0;
    };

    while (i < len) {
        while (i < len && expr[i] == ' ') i++; // skip spaces
        if (i >= len) break;

        String token;

        char ch = expr[i];
        if (ch == '(' || ch == ')' ||
            ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            token = String(ch);  
            i++;
        } else {
            // multi-character operand
            int start = i;
            while (i < len && expr[i] != ' ' && expr[i] != '(' && expr[i] != ')' &&
                   expr[i] != '+' && expr[i] != '-' &&
                   expr[i] != '*' && expr[i] != '/') {
                i++;
            }
            token = expr.substr(start, i - start);
        }

        
        if (token == "(") {
            opStack.push(token);
        }
        else if (token == ")") {
            while (!opStack.empty() && opStack.top() != "(")
                result += opStack.pop() + " ";
            if (!opStack.empty()) opStack.pop(); // remove '('
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/") {
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(token))
                result += opStack.pop() + " ";
            opStack.push(token);
        }
        else { // operand
            result += token + " ";
        }
    }

    while (!opStack.empty())
        result += opStack.pop() + " ";

    return result;
}

// Postfix to Assembly 
void postfixToAssembly(const String& postfixExpr, std::ostream& out) {
    stack<String> evalStack;
    std::vector<String> tokens = postfixExpr.split(' ');
    int tmpCounter = 1;

    for (size_t i = 0; i < tokens.size(); i++) {
        String token = tokens[i];
        if (token == "") continue; // skip empty tokens

        // if token is operator
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            String right = evalStack.pop();
            String left = evalStack.pop();
            String tmpVar = String("TMP") + String(std::to_string(tmpCounter++).c_str());

            
            
            // output assembly instructions 
            if (token == "+") {
                out << "    LD      " << left << "\n";
                out << "    AD      " << right << "\n";
            } else if (token == "-") {
                out << "    LD      " << left << "\n";
                out << "    SB      " << right << "\n";
            } else if (token == "*") {
                out << "    LD      " << left << "\n";
                out << "    MU      " << right << "\n";
            } else if (token == "/") {
                out << "    LD      " << left << "\n";
                out << "    DV      " << right << "\n";
            }

            out << "    ST      " << tmpVar << "\n";

            evalStack.push(tmpVar); // push TMPn 
        } else {
            // Operand
            evalStack.push(token);
        }
    }
}