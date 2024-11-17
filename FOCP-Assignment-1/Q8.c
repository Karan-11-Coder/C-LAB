#include <stdio.h>
int main() {
    int i;
    for (i=1;i<=5;i=i+1) {
        switch (i) {
            case 1:
            printf("1\n");
            break;
            case 2:
            printf("0 1\n");
            break;
            case 3:
            printf("1 0 1\n");
            break;
            case 4:
            printf("0 1 0 1\n");
            break;
            case 5:
            printf("1 0 1 0 1");
            break;
        }
    }
    return 0;
}