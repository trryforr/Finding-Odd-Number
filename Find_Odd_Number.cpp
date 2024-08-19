#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <stdexcept>

// Function to check if a string represents a valid number
bool isNumber(const std::string& str) {
    if (str.empty()) {
        return false;
    }
    return std::all_of(str.begin(), str.end(), ::isdigit);
}

// Function to print odd numbers between two values
void printOddNumbersBetween(const std::string& input1, const std::string& input2) {
    try {
        if (isNumber(input1) && isNumber(input2)) {
            int m = std::stoi(input1); // Convert string to integer
            int n = std::stoi(input2);

            // Ensure m is the smaller number and n is the larger number
            int start = std::min(m, n);
            int end = std::max(m, n);

            std::cout << "The Odd Numbers Between " << start << " and " << end << ":" << std::endl;

            // Print odd numbers between start and end
            for (int i = start; i <= end; ++i) {
                if (i % 2 != 0) {
                    std::cout << i << " ";
                }
            }
            std::cout << std::endl;
        } else {
            std::cout << "Enter valid numbers as values!" << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: Invalid number format." << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Error: Number out of range." << std::endl;
    }
}

int main() {
    std::string input1, input2;

    std::cout << "Enter two values: " << std::endl;
    std::cin >> input1 >> input2;

    printOddNumbersBetween(input1, input2);

    return 0;
}
