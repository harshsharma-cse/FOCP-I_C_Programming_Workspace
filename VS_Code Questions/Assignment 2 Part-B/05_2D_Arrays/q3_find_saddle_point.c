#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        printf("None\n");
        return 0;
    }

    int mat[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        int rowMin = mat[i][0];
        for (int j = 1; j < c; j++) {
            if (mat[i][j] < rowMin) {
                rowMin = mat[i][j];
            }
        }

        for (int j = 0; j < c; j++) {
            if (mat[i][j] == rowMin) {
                int isColMax = 1;
                for (int k = 0; k < r; k++) {
                    if (mat[k][j] > mat[i][j]) {
                        isColMax = 0;
                        break;
                    }
                }
                if (isColMax) {
                    printf("%d %d %d\n", i, j, mat[i][j]);
                    return 0;
                }
            }
        }
    }

    printf("None\n");
    return 0;
}
