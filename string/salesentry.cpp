//
// File:        salesentry.cpp
// Author:      Ayush patel
// Date:        10/30/2025
//
// Description: Implementation for SalesEntry (Milestone 4)
//              Uses getters for private members.
//

#include "string.hpp"
#include "salesentry.hpp"
#include <iostream>
#include <vector>
#include <fstream>


namespace {
    // Convert String to double manually
    double toDouble(const String& s) {
        double result = 0.0;
        double fraction = 0.0;
        bool decimal = false;
        double divisor = 10.0;
        bool negative = false;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (c == '-') negative = true;
            else if (c == '.') decimal = true;
            else if (c >= '0' && c <= '9') {
                int digit = c - '0';
                if (!decimal)
                    result = result * 10 + digit;
                else {
                    fraction += digit / divisor;
                    divisor *= 10;
                }
            }
        }
        result += fraction;
        if (negative) result *= -1;
        return result;
    }

    // Convert String to int manually
    int toInt(const String& s) {
        int result = 0;
        bool negative = false;
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (c == '-') negative = true;
            else if (c >= '0' && c <= '9')
                result = result * 10 + (c - '0');
        }
        if (negative) result *= -1;
        return result;
    }
}


SalesEntry::SalesEntry(const String& line) {
    String temp = line;
    std::vector<String> parts;

    if (temp[0] == '"') {
        int endQuote = temp.findch(1, '"');
        name = temp.substr(1, endQuote - 1);

        int after = endQuote + 2;  // skip closing quote and comma
        String rest = temp.substr(after, temp.length() - after);
        parts = rest.split(',');

        if (parts.size() >= 7) {
            mainCategory = parts[0];
            subCategory = parts[1];
            image = parts[2];
            ratings = toDouble(parts[3]);
            noOfRatings = toInt(parts[4]);
            discountPrice = parts[5];
            actualPrice = parts[6];
        }
    } else {
        parts = temp.split(',');
        if (parts.size() >= 8) {
            name = parts[0];
            mainCategory = parts[1];
            subCategory = parts[2];
            image = parts[3];
            ratings = toDouble(parts[4]);
            noOfRatings = toInt(parts[5]);
            discountPrice = parts[6];
            actualPrice = parts[7];
        }
    }
}


std::vector<SalesEntry> parse(std::istream& in) {
    std::vector<SalesEntry> result;
    char buffer[1024];
    bool firstLine = true;

    while (in.getline(buffer, 1024)) {
        String line(buffer);
        if (firstLine) {  // skip header line
            firstLine = false;
            continue;
        }
        if (line.length() == 0) continue;

        SalesEntry entry(line);
        result.push_back(entry);
    }
    return result;
}


void outputAll(std::ostream& out, const std::vector<SalesEntry>& s) {
    for (size_t i = 0; i < s.size(); ++i) {
        out << "-------------------------------------\n";
        out << "Name: "              << s[i].getName()         << '\n';
        out << "Main Category: "     << s[i].getMainCategory() << '\n';
        out << "Sub Category: "      << s[i].getSubCategory()  << '\n';
        out << "Image: "             << s[i].getImage()        << '\n';
        out << "Ratings: "           << s[i].getRatings()      << '\n';
        out << "Number of Ratings: " << s[i].getNoOfRatings()  << '\n';
        out << "Discount Price: "    << s[i].getDiscountPrice()<< '\n';
        out << "Actual Price: "      << s[i].getActualPrice()  << "\n\n";
    }
}


void outputTotal(std::ostream& out, const std::vector<SalesEntry>& s) {
    long total = 0;
    for (size_t i = 0; i < s.size(); ++i)
        total += s[i].getNoOfRatings();

    out << "Total number of ratings: " << total << std::endl;
}


void outputLink(std::ostream& out, const std::vector<SalesEntry>& s) {
    for (size_t i = 0; i < s.size(); ++i) {
        out << s[i].getImage() << std::endl;  // only print the image URLs
    }
}
