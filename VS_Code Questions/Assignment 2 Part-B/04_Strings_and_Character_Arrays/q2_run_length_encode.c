#include <stdio.h>

int main() {
    char str[1005];
    if (scanf("%1000s", str) != 1 || str[0] == '\0') {
        printf("\n");
        return 0;
    }

    int count = 1;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            printf("%c%d", str[i - 1], count);
            count = 1;
        }
    }

    int len = 0;
    while (str[len] != '\0') len++;
    printf("%c%d\n", str[len - 1], count);

    return 0;
}
