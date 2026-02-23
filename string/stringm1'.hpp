// File: string.hpp
#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>

const int STRING_SIZE = 256;  // The size of the String

// CLASS INV: str[length()] == 0 &&
//            0 <= length() <= capacity() &&
//            capacity() == STRING_SIZE - 1
class String {
public:
    String();                   // Empty string
    String(char);               // String('x')
    String(const char[]);       // String("abcd")

    int capacity() const;       // Max chars that can be stored
    int length() const;         // Number of char in string
    char& operator[](int);      // Modifier
    char operator[](int) const; // Accessor

    String& operator+=(const String&); // Concatenation
    bool operator==(const String&) const;
    bool operator<(const String&) const;
    String substr(int, int) const;     // Substring from start to end
    int findch(int, char) const;       // Find character from start
    int findstr(int, const String&) const; // Find string from start

    friend std::istream& operator>>(std::istream&, String&);
    friend std::ostream& operator<<(std::ostream&, const String&);

private:
    char str[STRING_SIZE];
};

// Non-member operators
String operator+(String, const String&);
bool operator==(const char[], const String&);
bool operator==(char, const String&);
bool operator<(const char[], const String&);
bool operator<(char, const String&);
bool operator<=(const String&, const String&);
bool operator!=(const String&, const String&);
bool operator>=(const String&, const String&);
bool operator>(const String&, const String&);

#endif
