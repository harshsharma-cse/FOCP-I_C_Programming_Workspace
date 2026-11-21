#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        return 0;
    }

    long long mat[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        long long rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("%lld", rowSum);
        if (i < r - 1) printf(" ");
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        long long colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("%lld", colSum);
        if (j < c - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
