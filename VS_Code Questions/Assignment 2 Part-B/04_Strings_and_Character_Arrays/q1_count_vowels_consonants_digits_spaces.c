#include <stdio.h>

int main() {
    char line[1005];
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("0 0 0 0\n");
        return 0;
    }

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
        char ch = line[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
