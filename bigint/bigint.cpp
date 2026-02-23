#include "bigint.hpp"

// Default constructor: sets to 0
Bigint::Bigint() {
    for (int k = 0; k < CAPACITY; ++k) num[k] = 0;
}

// Constructor from int
Bigint::Bigint(int value) {
    for (int k = 0; k < CAPACITY; ++k) num[k] = 0;
    int pos = 0;
    while (value > 0 && pos < CAPACITY) {
        num[pos++] = value % 10;
        value /= 10;
    }
}

// Constructor from const char[]
Bigint::Bigint(const char value[]) {
    for (int k = 0; k < CAPACITY; ++k) num[k] = 0;

    int length = 0;
    while (value[length] != '\0') ++length;

    int idx = 0;
    for (int j = length - 1; j >= 0 && idx < CAPACITY; --j, ++idx) {
        num[idx] = value[j] - '0';
    }
}

// Debug print
void Bigint::debugPrint(std::ostream& out) const {
    for (int i = CAPACITY - 1; i >= 0; --i) {
        out << num[i] << "|";
    }
    out << std::endl;
}

// Equality operators
bool Bigint::operator==(const Bigint& other) const {
    for (int i = 0; i < CAPACITY; ++i) {
        if (num[i] != other.num[i]) return false;
    }
    return true;
}

bool Bigint::operator==(int value) const {
    Bigint temp(value);
    return *this == temp;
}

bool Bigint::operator==(const char value[]) const {
    Bigint temp(value);
    return *this == temp;
}

// Addition
Bigint Bigint::operator+(const Bigint& other) const {
    Bigint result;
    int carry = 0;

    for (int i = 0; i < CAPACITY; ++i) {
        int sum = num[i] + other.num[i] + carry;
        result.num[i] = sum % 10;
        carry = sum / 10;
    }
    return result;
}

// Multiplication (Milestone 3)
Bigint Bigint::operator*(const Bigint& other) const {
    Bigint product;

    for (int i = 0; i < CAPACITY; ++i) {
        Bigint temp = timesDigit(other.num[i]);
        temp = temp.times10(i);
        product = product + temp;
    }

    return product;
}

// Subscript operator[] (returns digit at 10^i position)
int Bigint::operator[](int i) const {
    if (i < 0 || i >= CAPACITY) return 0; // Out of bounds -> return 0
    return num[i];
}

// Multiply by single digit 0-9
Bigint Bigint::timesDigit(int d) const {
    Bigint result;
    if (d < 0 || d > 9) return result; // Only single digit

    int carry = 0;
    for (int i = 0; i < CAPACITY; ++i) {
        int prod = num[i] * d + carry;
        result.num[i] = prod % 10;
        carry = prod / 10;
    }
    return result;
}

// Multiply by 10^n
Bigint Bigint::times10(int n) const {
    Bigint result;
    if (n < 0) return result;

    for (int i = CAPACITY - 1; i >= n; --i) {
        result.num[i] = num[i - n];
    }
    for (int i = 0; i < n; ++i) {
        result.num[i] = 0;
    }
    return result;
}

// Stream operators
std::ostream& operator<<(std::ostream& out, const Bigint& b) {
    int i = CAPACITY - 1;
    while (i > 0 && b.num[i] == 0) --i; // skip leading zeros

    int lineCount = 0;
    for (; i >= 0; --i) {
        out << b.num[i];
        if (++lineCount == 100 && i > 0) {
            out << std::endl;
            lineCount = 0;
        }
    }
    return out;
}

std::istream& operator>>(std::istream& in, Bigint& b) {
    for (int k = 0; k < CAPACITY; ++k) b.num[k] = 0;

    char ch;
    int digits[CAPACITY];
    int len = 0;

    while (in.get(ch)) {
        if (ch == ';') break; // stop at semicolon
        if (ch >= '0' && ch <= '9') { // manual check instead of std::isdigit
            if (len < CAPACITY) digits[len++] = ch - '0';
        }
    }

    int idx = 0;
    for (int j = len - 1; j >= 0 && idx < CAPACITY; --j, ++idx) {
        b.num[idx] = digits[j];
    }
    return in;
}

// Reverse comparison operators
bool operator==(int lhs, const Bigint& rhs) {
    Bigint temp(lhs);
    return temp == rhs;
}

bool operator==(const char lhs[], const Bigint& rhs) {
    Bigint temp(lhs);
    return temp == rhs;
}
