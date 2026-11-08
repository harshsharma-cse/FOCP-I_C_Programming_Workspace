#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        // Print n - i leading spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
        // Print i asterisks
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}