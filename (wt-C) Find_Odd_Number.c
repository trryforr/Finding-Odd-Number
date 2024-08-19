#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to check if a string represents a valid number
int isNumber(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0; // Returns 0 if any character is not a digit
        }
    }
    return 1; // Returns 1 if all characters are digits
}

// Function to print odd numbers between two values
void printOddNumbersBetween(char input1[], char input2[]) {
    int m, n;

    // Check if both inputs are numbers
    if (isNumber(input1) && isNumber(input2)) {
        m = atoi(input1); // Convert string to integer
        n = atoi(input2);

        // Ensure m is the smaller number and n is the larger number
        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        printf("The Odd Numbers Between %d and %d: \n", m, n);

        // Print odd numbers between m and n
        for (int i = m; i <= n; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
            else{
                printf("None");
            }
        }
        printf("\n");
    } else {
        printf("\nEnter valid numbers as values!\n");
    }
}

int main() {
    char input1[20], input2[20];

    printf("Enter two values: \n");
    scanf("%s %s", input1, input2);

    printOddNumbersBetween(input1, input2);

    return 0;
}
