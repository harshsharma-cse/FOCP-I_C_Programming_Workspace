#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("0\n");
        return 0;
    }

    long long arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long minDiff = arr[0] - arr[1];
    if (minDiff < 0) minDiff = -minDiff;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);
    return 0;
}
