#include <stdio.h>

int main() {
    int num, reversed;

    // Ask the user to enter a three-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if the number is a valid 3-digit number
    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    // Reverse the digits
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    reversed = units * 100 + tens * 10 + hundreds;

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
