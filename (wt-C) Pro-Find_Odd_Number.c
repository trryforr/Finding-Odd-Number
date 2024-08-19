#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string represents a valid number
int isNumber(const char str[]) {
    size_t len = strlen(str);
    for (size_t i = 0; i < len; i++) {
        if (!isdigit((unsigned char)str[i])) {
            return 0; // Returns 0 if any character is not a digit
        }
    }
    return 1; // Returns 1 if all characters are digits
}

// Function to print odd numbers between two values
void printOddNumbersBetween(const char input1[], const char input2[]) {
    char *endptr;
    long m = strtol(input1, &endptr, 10);
    if (*endptr != '\0') {
        printf("Invalid input: %s is not a valid number.\n", input1);
        return;
    }

    long n = strtol(input2, &endptr, 10);
    if (*endptr != '\0') {
        printf("Invalid input: %s is not a valid number.\n", input2);
        return;
    }

    // Ensure m is the smaller number and n is the larger number
    if (m > n) {
        long temp = m;
        m = n;
        n = temp;
    }

    printf("The Odd Numbers Between %ld and %ld: \n", m, n);

    // Print odd numbers between m and n
    for (long i = m; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%ld ", i);
        }
        else{
            printf("None");
        }
    }
    printf("\n");
}

int main() {
    char input1[20], input2[20];

    printf("Enter two values (up to 19 characters each): \n");
    if (scanf("%19s %19s", input1, input2) != 2) {
        printf("Error reading input.\n");
        return 1;
    }

    printOddNumbersBetween(input1, input2);

    return 0;
}
