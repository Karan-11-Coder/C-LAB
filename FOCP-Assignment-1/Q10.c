#include <stdio.h>

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%ld ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }

    return 0;
}
