//
// File:        salesentry.hpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class definition for a sales entry.
//
//
//
 
#ifndef CS_SALESENTRY_H_
#define CS_SALESENTRY_H_

#include "string.hpp"
#include <iostream>
#include <vector>

// A single sales entry
class SalesEntry {
public:
    SalesEntry() {};
    SalesEntry(const String&);
    friend std::ostream& operator<<(std::ostream&, const SalesEntry&);

    // ---- Getter functions ----
    const String& getName() const { return name; }
    const String& getMainCategory() const { return mainCategory; }
    const String& getSubCategory() const { return subCategory; }
    const String& getImage() const { return image; }
    double getRatings() const { return ratings; }
    int getNoOfRatings() const { return noOfRatings; }
    const String& getDiscountPrice() const { return discountPrice; }
    const String& getActualPrice() const { return actualPrice; }

private:
    String  name;
    String  mainCategory;
    String  subCategory;
    String  image;
    double  ratings;
    int     noOfRatings;
    String  discountPrice;
    String  actualPrice;
};

// ---- Free functions ----
std::vector<SalesEntry> parse      (std::istream&);
void                    outputAll  (std::ostream&, const std::vector<SalesEntry>&);
void                    outputTotal(std::ostream&, const std::vector<SalesEntry>&);
void                    outputLink (std::ostream&, const std::vector<SalesEntry>&);

#endif
