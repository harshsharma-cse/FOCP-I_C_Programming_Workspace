#include <stdio.h>

int main() {
    int n;
    long long target;
    if (scanf("%d %lld", &n, &target) != 2 || n <= 0) {
        printf("0\n");
        return 0;
    }

    long long arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    return 0;
}
