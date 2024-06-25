#include <stdio.h>

const char* odd_or_even(int number) {
    // Create an array of two strings, "Even" and "Odd"
    const char* results[] = {"Even", "Odd"};
    
    // Use the bitwise AND operator to check the least significant bit
    // If the least significant bit is 0, the number is even (results[0])
    // If the least significant bit is 1, the number is odd (results[1])
    return results[number & 1];
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%i",&number);
    printf("%d is %s\n", number, odd_or_even(number));  
    return 0;
}
