#ifndef FORMATDELIM_H
#define FORMATDELIM_H

#include <string>

class FormatDelim
{
private:
    std::string delimiter;
    

public:
    FormatDelim(std::string delim) : delimiter(delim) {}

    std::string set(std::string input) const {
        int index;
        index = input.find(delimiter);
        input.at(index) = ' ';
        input.at(index + 1) = ' ';
        input.insert(index, ": Title:");
        index = input.find(delimiter);
        input.at(index) = ' ';
        input.at(index + 1) = ' ';
        input.insert(index, " Name: ");
        index = input.find(delimiter);
        input.at(index) = ' ';
        input.at(index + 1) = ' ';
        input.insert(index, " Post: ");
        index = input.find(delimiter);
        input.at(index) = ' ';
        input.at(index + 1) = ' ';
        input.insert(index, " Date&Time:");

        return input;
    }

    void setDelimiter(const std::string& delim) {
        delimiter = delim;
    }

    std::string getDelimiter() const {
        return delimiter;
    }
};

#endif // FORMATDELIM_H