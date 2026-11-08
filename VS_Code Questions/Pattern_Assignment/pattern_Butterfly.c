#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        // Wings width increases up to mid, then decreases
        int stars = (i <= mid) ? i : (n - i + 1);
        int spaces = (mid - stars) * 2;

        // Left wing
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        // Central gap
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        // Right wing
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}