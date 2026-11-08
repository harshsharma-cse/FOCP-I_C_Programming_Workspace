#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        // Print i leading spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        // Print 2 * (n - i) - 1 asterisks
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}