#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 5) {
        printf("None\n");
        return 0;
    }

    int found = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            for (int c = b + 1; c <= n; c++) {
                if ((long long)a * a + (long long)b * b == (long long)c * c) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
