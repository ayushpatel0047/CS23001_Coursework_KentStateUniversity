#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

// Default constructor
String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}

// Constructor for a single character
String::String(char ch) {
    if (ch == '\0') {
        stringSize = 1;
        str = new char[stringSize];
        str[0] = '\0';
    } else {
        stringSize = 2;
        str = new char[stringSize];
        str[0] = ch;
        str[1] = '\0';
    }
}

// Constructor from a C-style string
String::String(const char s[]) {
    int lenTmp = 0;
    while (s[lenTmp] != '\0') {
        lenTmp++;
    }
    stringSize = lenTmp + 1;
    str = new char[stringSize];

    int a = 0;
    while (a < lenTmp) {
        str[a] = s[a];
        a++;
    }
    str[lenTmp] = '\0';
}

// Copy constructor
String::String(const String& other) {
    stringSize = other.stringSize;
    str = new char[stringSize];

    int a = 0;
    while (a < stringSize) {
        str[a] = other.str[a];
        a++;
    }
}

// Destructor
String::~String() {
    delete[] str;
}

// Assignment operator
String& String::operator=(String other) {
    swap(other);
    return *this;
}

// Swap function
void String::swap(String& other) {
    char* tmpStr = str;
    str = other.str;
    other.str = tmpStr;

    int tmpSize = stringSize;
    stringSize = other.stringSize;
    other.stringSize = tmpSize;
}

// capacity()
int String::capacity() const {
    return stringSize - 1;
}

// length()
int String::length() const {
    return capacity();
}

// operator[] const
char String::operator[](int a) const {
    assert(a >= 0 && a < length());
    return str[a];
}

// operator[] non-const
char& String::operator[](int a) {
    assert(a >= 0 && a < length());
    return str[a];
}

// operator+=
String& String::operator+=(const String &rhs) {
    int len1 = length();
    int len2 = rhs.length();
    int newSize = len1 + len2 + 1;

    char* newStr = new char[newSize];
    int a = 0;
    while (a < len1) {
        newStr[a] = str[a];
        a++;
    }

    int b = 0;
    while (b < len2) {
        newStr[len1 + b] = rhs.str[b];
        b++;
    }
    newStr[newSize - 1] = '\0';

    delete[] str;
    str = newStr;
    stringSize = newSize;
    return *this;
}

// operator+ 
String operator+(String lhs, const String &rhs) {
    lhs += rhs;
    return lhs;
}

// operator==
bool String::operator==(const String &rhs) const {
    if (length() != rhs.length()) return false;

    int a = 0;
    while (a < length()) {
        if (str[a] != rhs.str[a]) return false;
        a++;
    }
    return true;
}

// operator<
bool String::operator<(const String &rhs) const {
    int a = 0;
    while (str[a] != '\0' && rhs.str[a] != '\0') {
        if (str[a] < rhs.str[a]) return true;
        if (str[a] > rhs.str[a]) return false;
        a++;
    }
    return length() < rhs.length();
}

// substr()
String String::substr(int start, int len) const {
    if (start < 0) start = 0;
    if (start >= length() || len <= 0) return String();

    if (start + len > length()) len = length() - start;

    String result;
    delete[] result.str;
    result.stringSize = len + 1;
    result.str = new char[result.stringSize];

    for (int i = 0; i < len; ++i) result.str[i] = str[start + i];
    result.str[len] = '\0';

    return result;
}


// findch()
int String::findch(int start, char ch) const {
    int a = start;
    while (a < length()) {
        if (str[a] == ch) return a;
        a++;
    }
    return -1;
}

// findstr()
int String::findstr(int start, const String &substr) const {
    int subLen = substr.length();
    int a = start;
    while (a <= length() - subLen) {
        int b = 0;
        while (b < subLen && str[a + b] == substr.str[b]) {
            b++;
        }
        if (b == subLen) return a;
        a++;
    }
    return -1;
}

// operator>>
std::istream& operator>>(std::istream &in, String &rhs) {
    char buffer[1000];
    in >> buffer;
    rhs = String(buffer);
    return in;
}

// split()
std::vector<String> String::split(char delimiter) const {
    std::vector<String> result;
    int start = 0;
    int a = 0;
    while (a <= length()) {
        if (a == length() || str[a] == delimiter) {
            result.push_back(substr(start, a - start));
            start = a + 1;
        }
        a++;
    }
    return result;
}

// operator<<
std::ostream& operator<<(std::ostream &out, const String &rhs) {
    out << rhs.str;
    return out;
}

// Comparison operators for char and const char[]
bool operator==(char lhs, const String &rhs) { 
    return String(lhs) == rhs; 
    }
bool operator==(const char lhs[], const String &rhs) { 
    return String(lhs) == rhs; 
    }
bool operator<(char lhs, const String &rhs) { 
    return String(lhs) < rhs; 
    }
bool operator<(const char lhs[], const String &rhs) { 
    return String(lhs) < rhs; 
    }
bool operator!=(const String &lhs, const String &rhs) { 
    return !(lhs == rhs); 
    }
bool operator>(const String &lhs, const String &rhs) { 
    return rhs < lhs; 
    }
bool operator>=(const String &lhs, const String &rhs) { 
    return !(lhs < rhs); 
    }
bool operator<=(const String &lhs, const String &rhs) { 
    return !(rhs < lhs); 
    }
