#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_

#include "stack.hpp"
#include "../string/string.hpp"
#include <vector>
#include <iostream>

// Converts fully parenthesized infix expression to postfix
String infixToPostfix(const String& expr);

// Converts postfix expression to assembly instructions
void postfixToAssembly(const String& postfixExpr, std::ostream& out);

#endif