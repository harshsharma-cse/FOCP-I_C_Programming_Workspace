#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("0\n");
        return 0;
    }

    long long arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int currentRun = 1;
    int maxRun = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentRun++;
            if (currentRun > maxRun) {
                maxRun = currentRun;
            }
        } else {
            currentRun = 1;
        }
    }

    printf("%d\n", maxRun);
    return 0;
}
