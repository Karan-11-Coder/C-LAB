#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }

        for (int j = 0; j < (n - i) * 2; j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }
}

int main() {
    int n = 5; 
    printPyramid(n);
    return 0;
}
