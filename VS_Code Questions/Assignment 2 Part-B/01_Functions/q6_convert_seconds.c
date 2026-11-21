#include <stdio.h>

void convertSeconds(long long totalSeconds) {
    long long hours = totalSeconds / 3600;
    long long rem = totalSeconds % 3600;
    long long minutes = rem / 60;
    long long seconds = rem % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
}

int main() {
    long long totalSeconds;
    if (scanf("%lld", &totalSeconds) == 1) {
        convertSeconds(totalSeconds);
    }
    return 0;
}
