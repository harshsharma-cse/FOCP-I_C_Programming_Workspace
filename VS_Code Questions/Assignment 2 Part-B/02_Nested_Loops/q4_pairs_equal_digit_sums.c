#include <stdio.h>

int digitSum(long long num) {
    if (num < 0) num = -num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("0\n");
        return 0;
    }

    int sums[1000];
    for (int i = 0; i < n; i++) {
        long long val;
        scanf("%lld", &val);
        sums[i] = digitSum(val);
    }

    long long pairs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) {
                pairs++;
            }
        }
    }

    printf("%lld\n", pairs);
    return 0;
}
