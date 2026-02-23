#include "string.hpp"
#include <cassert>

// Default constructor
String::String() {
    str[0] = '\0';
}

// Constructor
String::String(char ch) {
    str[0] = ch;
    str[1] = '\0';  
}

String::String(const char s[]) {
    int pos = 0;
    while (s[pos] != '\0' && pos < capacity()) {
        str[pos] = s[pos];
        pos++;
    }
    str[pos] = '\0';  
}

// Returns maximum number of characters that can be stored
int String::capacity() const {
    return STRING_SIZE - 1;
}

// Returns the number of characters in the string
int String::length() const {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

// accessor
char String::operator[](int pos) const {
    assert(pos >= 0 && pos < length());
    return str[pos];
}

// modifier
char& String::operator[](int pos) {
    assert(pos >= 0 && pos < length());
    return str[pos];
}

// += operator
String& String::operator+=(const String &rhs) {
    int current_len = length();  
    int rhs_len = rhs.length();     
    int i = 0;

    
    while (i < rhs_len && current_len + i < capacity()) {
        str[current_len + i] = rhs.str[i];
        i++;
    }

    str[current_len + i] = '\0';  
    return *this;  
}

// + operator
String operator+(String lhs, const String &rhs) {
    return lhs += rhs;
}

// equality operator
bool String::operator==(const String &rhs) const {
    int pos = 0;
    while (str[pos] != '\0' && rhs.str[pos] != '\0' && str[pos] == rhs.str[pos]) {
        pos++;
    }
    return str[pos] == rhs.str[pos];
}

// less than operator
bool String::operator<(const String &rhs) const {
    int pos = 0;
    while (str[pos] != '\0' && rhs.str[pos] != '\0' && str[pos] == rhs.str[pos]) {
        pos++;
    }
    return str[pos] < rhs.str[pos];
}

// I/O operators
std::istream& operator>>(std::istream &in, String &rhs) {
    char buffer[STRING_SIZE];
    if (!in.eof()) {
        in >> buffer;
    } else {
        buffer[0] = '\0';
    }
    rhs = String(buffer);
    return in;
}

std::ostream& operator<<(std::ostream &out, const String &rhs) {
    out << rhs.str;
    return out;
}

// Substring 
String String::substr(int start, int end) const {
    if (start < 0) start = 0;
    if (end >= length()) end = length() - 1;
    if (start > end) return String();

    String result;
    int pos = start;
    int result_pos = 0;
    while (pos <= end) {
        result.str[result_pos] = str[pos];
        pos++;
        result_pos++;
    }
    result.str[result_pos] = '\0'; 
    return result;
}

// character starting from a specific position
int String::findch(int start, char ch) const {
    if (start < 0) start = 0;
    if (start >= length()) return -1;

    int pos = start;
    while (pos < length()) {
        if (str[pos] == ch) return pos;
        pos++;
    }
    return -1;
}

// substring starting from a specific position
int String::findstr(int start, const String &substr) const {
    int substr_len = substr.length();
    if (start < 0 || start >= length()) return -1;

    for (int pos = start; pos <= length() - substr_len; pos++) {
        int sub_pos = 0;
        while (sub_pos < substr_len && str[pos + sub_pos] == substr.str[sub_pos]) {
            sub_pos++;
        }
        if (sub_pos == substr_len) return pos;
    }
    return -1;
}

// comparison operators
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
