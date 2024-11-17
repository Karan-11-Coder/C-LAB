#include <stdio.h>
#include <math.h>

// Function prototypes
long long binaryToDecimal(long long n);
long long decimalToBinary(int n);

int main() {
    int choice;
    long long binary, decimal;
    int number;

    printf("Choose an option:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            decimal = binaryToDecimal(binary);
            printf("%lld in binary = %lld in decimal\n", binary, decimal);
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            binary = decimalToBinary(number);
            printf("%d in decimal = %lld in binary\n", number, binary);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function to convert binary to decimal
long long binaryToDecimal(long long n) {
    long long decimal = 0;
    int i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int n) {
    long long binary = 0;
    int remainder, i = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }

    return binary;
}
